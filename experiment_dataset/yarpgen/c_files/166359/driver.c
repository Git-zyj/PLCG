#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 483024694U;
unsigned long long int var_10 = 7002256834516244047ULL;
long long int var_12 = 1094188765893536370LL;
unsigned short var_19 = (unsigned short)13715;
int zero = 0;
unsigned long long int var_20 = 12542644352048002499ULL;
unsigned int var_21 = 2455689790U;
unsigned int var_22 = 3644739872U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
