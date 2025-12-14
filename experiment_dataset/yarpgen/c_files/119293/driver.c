#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16903;
int var_3 = 793059761;
int var_5 = -869952553;
signed char var_7 = (signed char)-74;
unsigned long long int var_8 = 924582169213255068ULL;
short var_9 = (short)-32115;
unsigned int var_11 = 852768232U;
int var_12 = 276315663;
int zero = 0;
unsigned char var_14 = (unsigned char)174;
signed char var_15 = (signed char)-62;
int var_16 = 2090678105;
void init() {
}

void checksum() {
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
