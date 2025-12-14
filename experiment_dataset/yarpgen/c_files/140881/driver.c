#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1366721878U;
unsigned int var_3 = 785277060U;
int var_4 = 942119246;
_Bool var_5 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-68;
unsigned int var_18 = 839186405U;
unsigned int var_19 = 219224633U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
