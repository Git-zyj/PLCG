#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2144239844U;
unsigned long long int var_12 = 13611214929078505597ULL;
unsigned long long int var_17 = 2346839854788704782ULL;
int zero = 0;
unsigned long long int var_18 = 15232679536748597342ULL;
unsigned long long int var_19 = 16345756429382218412ULL;
void init() {
}

void checksum() {
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
