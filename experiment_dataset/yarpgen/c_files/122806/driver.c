#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -695585219208433203LL;
long long int var_2 = -1062962001519665663LL;
long long int var_5 = -5431263474036023490LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)50;
unsigned char var_11 = (unsigned char)248;
int zero = 0;
unsigned char var_13 = (unsigned char)128;
long long int var_14 = -1853122836915460627LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -795427702819420262LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
