#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2196660233898482928LL;
unsigned char var_7 = (unsigned char)190;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 6022694356745846265ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 3627275926807460401LL;
int zero = 0;
unsigned long long int var_17 = 15480662303131232290ULL;
unsigned long long int var_18 = 13622508434730978058ULL;
unsigned int var_19 = 1143498945U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
