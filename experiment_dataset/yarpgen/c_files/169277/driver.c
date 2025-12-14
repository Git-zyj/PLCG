#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25807;
unsigned short var_6 = (unsigned short)459;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)192;
unsigned long long int var_12 = 8046549490377859496ULL;
int var_13 = -1447801438;
unsigned int var_15 = 3895403201U;
unsigned long long int var_16 = 16040316615472017132ULL;
int zero = 0;
long long int var_19 = 1814306921808278143LL;
unsigned int var_20 = 567173360U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
