#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3455758421235498304ULL;
signed char var_3 = (signed char)5;
long long int var_5 = 3203157422942054275LL;
unsigned short var_7 = (unsigned short)41650;
int var_16 = 894826854;
int zero = 0;
short var_19 = (short)-4314;
unsigned int var_20 = 4214927587U;
unsigned char var_21 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
