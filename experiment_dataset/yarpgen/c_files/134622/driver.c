#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)124;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-12445;
unsigned int var_9 = 3689376618U;
unsigned int var_10 = 2898990360U;
unsigned int var_11 = 627366133U;
unsigned short var_16 = (unsigned short)38784;
unsigned short var_17 = (unsigned short)51765;
int zero = 0;
short var_18 = (short)-5831;
unsigned int var_19 = 3430306258U;
unsigned short var_20 = (unsigned short)44405;
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
