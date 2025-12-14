#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_1 = 2408615733U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)29;
unsigned int var_5 = 115909821U;
unsigned int var_7 = 4096020242U;
signed char var_9 = (signed char)112;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)101;
unsigned long long int var_13 = 6981146330928580319ULL;
unsigned int var_14 = 2377437988U;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
