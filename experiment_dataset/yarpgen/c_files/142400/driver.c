#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2365147797U;
unsigned int var_2 = 257189824U;
unsigned int var_7 = 71481837U;
unsigned int var_9 = 1037038877U;
int zero = 0;
unsigned int var_20 = 1327127115U;
unsigned int var_21 = 493773676U;
unsigned int var_22 = 3475398650U;
unsigned int var_23 = 2656461686U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
