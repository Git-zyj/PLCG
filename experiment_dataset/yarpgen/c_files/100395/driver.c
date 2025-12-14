#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3152235632U;
unsigned int var_4 = 3092149743U;
unsigned int var_7 = 3287129097U;
unsigned int var_10 = 2539331612U;
unsigned int var_11 = 4224247088U;
unsigned int var_18 = 21904694U;
int zero = 0;
unsigned int var_20 = 3880556626U;
unsigned int var_21 = 182354176U;
unsigned int var_22 = 3592311250U;
unsigned int var_23 = 2236863175U;
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
