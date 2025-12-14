#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 151898809U;
unsigned char var_3 = (unsigned char)32;
long long int var_5 = -4816430113607925124LL;
unsigned char var_7 = (unsigned char)53;
unsigned long long int var_11 = 1036001975185619810ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2573927629U;
long long int var_16 = -619397171670212920LL;
unsigned long long int var_17 = 9354837631428613705ULL;
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
