#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39857;
unsigned int var_3 = 2351954450U;
unsigned short var_10 = (unsigned short)39262;
unsigned int var_14 = 3467793003U;
int zero = 0;
short var_15 = (short)-13574;
unsigned long long int var_16 = 2467013702159863869ULL;
int var_17 = 1246992649;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 812721640U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
