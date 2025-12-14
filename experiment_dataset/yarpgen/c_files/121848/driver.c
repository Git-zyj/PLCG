#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
int var_3 = -2139976977;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_20 = (short)22875;
signed char var_21 = (signed char)-23;
unsigned int var_22 = 721035579U;
signed char var_23 = (signed char)-21;
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
