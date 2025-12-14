#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
unsigned int var_1 = 731431938U;
long long int var_2 = 99666180123995256LL;
int var_8 = 593730009;
unsigned short var_10 = (unsigned short)30526;
unsigned char var_11 = (unsigned char)222;
short var_12 = (short)5791;
int zero = 0;
signed char var_13 = (signed char)-80;
unsigned long long int var_14 = 819077947551072816ULL;
unsigned short var_15 = (unsigned short)328;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
