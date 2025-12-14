#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1270422862;
signed char var_4 = (signed char)2;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)-101;
int zero = 0;
long long int var_15 = -2334545029146220180LL;
long long int var_16 = 4614789085775736564LL;
unsigned short var_17 = (unsigned short)33609;
unsigned short var_18 = (unsigned short)38978;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
