#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3023299012U;
unsigned long long int var_5 = 4168237100803915957ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 2194625858479796216ULL;
unsigned int var_10 = 1804063953U;
unsigned char var_14 = (unsigned char)208;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 732068328U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
