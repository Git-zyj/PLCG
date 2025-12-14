#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -822790939;
unsigned int var_6 = 3328273054U;
unsigned short var_7 = (unsigned short)56616;
unsigned int var_8 = 1262391607U;
unsigned short var_9 = (unsigned short)51781;
int zero = 0;
unsigned long long int var_10 = 5259008407274511514ULL;
unsigned int var_11 = 3138415872U;
unsigned int var_12 = 613403618U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
