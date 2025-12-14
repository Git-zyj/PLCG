#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32818;
short var_1 = (short)19595;
unsigned short var_5 = (unsigned short)60881;
signed char var_8 = (signed char)-119;
unsigned long long int var_13 = 16712498500093209721ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)5044;
unsigned int var_16 = 1471970357U;
void init() {
}

void checksum() {
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
