#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3556614626U;
short var_8 = (short)-6067;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4387799628989789784ULL;
int zero = 0;
int var_15 = 488974890;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8887398281758042527LL;
void init() {
}

void checksum() {
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
