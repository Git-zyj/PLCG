#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1149710292;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)242;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
int var_16 = 1243752202;
unsigned long long int var_17 = 7547714952600682657ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
