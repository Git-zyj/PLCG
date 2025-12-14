#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1637733261U;
unsigned char var_3 = (unsigned char)252;
short var_6 = (short)16289;
unsigned short var_9 = (unsigned short)29312;
int var_10 = -2104095754;
short var_12 = (short)27852;
signed char var_16 = (signed char)-11;
int zero = 0;
int var_17 = 269403256;
unsigned long long int var_18 = 13276155498874804086ULL;
unsigned int var_19 = 2606394850U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
