#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3354810192U;
unsigned int var_4 = 2936260810U;
unsigned int var_7 = 2769404583U;
unsigned int var_9 = 3774302843U;
int zero = 0;
unsigned int var_12 = 2860498263U;
unsigned int var_13 = 2641177045U;
unsigned int var_14 = 535745850U;
unsigned int var_15 = 2637723456U;
void init() {
}

void checksum() {
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
