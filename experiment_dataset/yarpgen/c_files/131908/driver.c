#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_6 = (unsigned short)21689;
unsigned long long int var_7 = 10572589398314630680ULL;
unsigned int var_9 = 3198351907U;
unsigned short var_11 = (unsigned short)19580;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)76;
unsigned long long int var_16 = 14003967628291077973ULL;
unsigned int var_17 = 2888272349U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
