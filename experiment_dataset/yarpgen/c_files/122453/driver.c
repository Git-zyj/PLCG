#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7510951545296367128ULL;
signed char var_2 = (signed char)84;
int var_3 = 383448488;
int zero = 0;
int var_10 = -546221279;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2145952629U;
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
