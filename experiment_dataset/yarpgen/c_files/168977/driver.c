#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1558369798;
unsigned int var_2 = 3822509996U;
unsigned short var_6 = (unsigned short)36812;
int var_7 = 289137847;
long long int var_8 = 7750556288072276316LL;
unsigned int var_10 = 1735265936U;
unsigned short var_11 = (unsigned short)16123;
int zero = 0;
int var_13 = -409332432;
long long int var_14 = -7565047036557410629LL;
int var_15 = 1659672280;
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
