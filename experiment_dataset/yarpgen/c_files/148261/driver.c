#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1327197128U;
unsigned int var_4 = 2516972057U;
unsigned long long int var_5 = 13069119098027067829ULL;
unsigned int var_9 = 3710962353U;
int zero = 0;
unsigned short var_10 = (unsigned short)21186;
unsigned int var_11 = 2734356737U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
