#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49265;
int var_3 = 585347885;
unsigned long long int var_4 = 3527274012470927663ULL;
int var_5 = -1710447671;
unsigned long long int var_6 = 1777002976981791095ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 17786155445144171276ULL;
int var_14 = -852676670;
int zero = 0;
int var_16 = -753931606;
unsigned short var_17 = (unsigned short)49061;
void init() {
}

void checksum() {
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
