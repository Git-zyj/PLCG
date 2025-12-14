#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2520270269U;
unsigned int var_1 = 3614387358U;
unsigned int var_2 = 3724884733U;
unsigned int var_3 = 2959007697U;
unsigned int var_4 = 3198978368U;
unsigned int var_5 = 3005314131U;
unsigned int var_6 = 1646887093U;
unsigned int var_7 = 939422958U;
unsigned int var_9 = 730752186U;
unsigned int var_10 = 1978618507U;
int zero = 0;
unsigned int var_11 = 2751892773U;
unsigned int var_12 = 228237421U;
unsigned int var_13 = 914206485U;
unsigned int var_14 = 399227016U;
unsigned int var_15 = 3319944776U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
