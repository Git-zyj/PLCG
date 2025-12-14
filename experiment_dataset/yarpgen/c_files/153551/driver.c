#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
unsigned long long int var_5 = 13715604226164816005ULL;
unsigned int var_8 = 2874539103U;
unsigned int var_9 = 4152586020U;
unsigned long long int var_11 = 802989232060718523ULL;
unsigned long long int var_15 = 3943877998297804204ULL;
unsigned int var_17 = 3201396436U;
int zero = 0;
unsigned int var_18 = 3132373211U;
_Bool var_19 = (_Bool)1;
int var_20 = 502655953;
void init() {
}

void checksum() {
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
