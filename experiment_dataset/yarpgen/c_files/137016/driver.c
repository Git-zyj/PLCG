#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3776460430U;
unsigned int var_1 = 1702063801U;
unsigned int var_2 = 1641129456U;
unsigned int var_3 = 2128015959U;
unsigned int var_4 = 4186967963U;
unsigned int var_7 = 34210790U;
unsigned int var_8 = 17590067U;
unsigned int var_9 = 4166207288U;
unsigned int var_11 = 4188158611U;
unsigned int var_12 = 4059165395U;
int zero = 0;
unsigned int var_16 = 2977808000U;
unsigned int var_17 = 3874576966U;
unsigned int var_18 = 1032707757U;
unsigned int var_19 = 3670730961U;
unsigned int var_20 = 507971537U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
