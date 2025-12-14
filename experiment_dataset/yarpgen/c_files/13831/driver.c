#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6572987227550044520ULL;
unsigned short var_3 = (unsigned short)55890;
unsigned int var_4 = 929933835U;
unsigned long long int var_5 = 16175475769779747026ULL;
int var_7 = 1157493807;
signed char var_8 = (signed char)-99;
long long int var_12 = 1139159021636593804LL;
int zero = 0;
unsigned short var_15 = (unsigned short)19015;
unsigned short var_16 = (unsigned short)10920;
unsigned short var_17 = (unsigned short)28597;
void init() {
}

void checksum() {
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
