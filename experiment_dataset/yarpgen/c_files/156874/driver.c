#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -235381110;
long long int var_12 = 3485990618141735820LL;
unsigned short var_14 = (unsigned short)48988;
int zero = 0;
unsigned char var_15 = (unsigned char)185;
signed char var_16 = (signed char)-43;
unsigned long long int var_17 = 18369925975191045698ULL;
unsigned int var_18 = 2578054895U;
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
