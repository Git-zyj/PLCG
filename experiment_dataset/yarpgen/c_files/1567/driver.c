#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1041765440;
unsigned int var_1 = 442870328U;
unsigned int var_13 = 1180758625U;
int zero = 0;
unsigned long long int var_17 = 17325867627562292433ULL;
unsigned long long int var_18 = 16484584894848263153ULL;
int var_19 = 16941179;
unsigned long long int var_20 = 7039255342404025860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
