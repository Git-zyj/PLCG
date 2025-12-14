#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16924212827557312736ULL;
int var_1 = 1791695224;
short var_4 = (short)1807;
short var_8 = (short)27145;
unsigned char var_10 = (unsigned char)163;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
long long int var_14 = -3360824018476449200LL;
unsigned int var_15 = 2964306866U;
signed char var_16 = (signed char)-12;
short var_17 = (short)-5222;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
