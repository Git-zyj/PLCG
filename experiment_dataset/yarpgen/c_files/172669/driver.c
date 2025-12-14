#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2327496639U;
unsigned int var_6 = 2513386224U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3257678563U;
unsigned int var_19 = 2000430271U;
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
