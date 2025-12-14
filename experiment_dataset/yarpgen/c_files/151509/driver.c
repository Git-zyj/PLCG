#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned char var_1 = (unsigned char)4;
int var_3 = 2086109251;
short var_4 = (short)23205;
unsigned long long int var_5 = 16514050470026719927ULL;
int var_6 = 1914411149;
unsigned short var_7 = (unsigned short)24653;
signed char var_8 = (signed char)-31;
unsigned long long int var_9 = 13735043507662957123ULL;
unsigned short var_12 = (unsigned short)40926;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
unsigned long long int var_14 = 13880844386490705415ULL;
unsigned short var_15 = (unsigned short)34327;
short var_16 = (short)21515;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
