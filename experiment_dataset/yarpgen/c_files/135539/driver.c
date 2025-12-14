#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23343;
unsigned int var_4 = 178212502U;
int var_7 = 211987685;
unsigned short var_9 = (unsigned short)48662;
unsigned short var_10 = (unsigned short)1930;
unsigned short var_11 = (unsigned short)30179;
unsigned int var_12 = 217882362U;
int zero = 0;
unsigned int var_13 = 1224182080U;
signed char var_14 = (signed char)49;
int var_15 = 549250831;
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
