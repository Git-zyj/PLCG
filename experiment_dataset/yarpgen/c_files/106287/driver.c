#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6764369330582057610ULL;
long long int var_5 = 4074825313072318829LL;
unsigned long long int var_7 = 13726991217562759936ULL;
signed char var_8 = (signed char)-78;
unsigned long long int var_10 = 2418604856719461407ULL;
unsigned int var_11 = 1648410809U;
int zero = 0;
long long int var_14 = -6106180525240722589LL;
unsigned long long int var_15 = 10705602357936812726ULL;
unsigned int var_16 = 2748369338U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
