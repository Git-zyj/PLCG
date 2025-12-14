#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
signed char var_1 = (signed char)-94;
short var_9 = (short)30687;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_18 = (short)-22836;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-13589;
signed char var_21 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
