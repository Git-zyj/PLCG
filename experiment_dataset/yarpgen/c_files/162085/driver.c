#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3835410896U;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)125;
int zero = 0;
unsigned long long int var_13 = 445475786791218277ULL;
unsigned char var_14 = (unsigned char)28;
unsigned int var_15 = 2864500954U;
void init() {
}

void checksum() {
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
