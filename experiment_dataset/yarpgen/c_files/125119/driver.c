#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3257492093861625986LL;
unsigned int var_14 = 755162526U;
int zero = 0;
unsigned long long int var_17 = 13133270996077529553ULL;
unsigned long long int var_18 = 15293424119118330355ULL;
unsigned long long int var_19 = 8072539456685910267ULL;
void init() {
}

void checksum() {
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
