#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1161690748;
unsigned short var_1 = (unsigned short)43112;
int var_2 = -1350314209;
_Bool var_4 = (_Bool)0;
short var_5 = (short)7463;
signed char var_7 = (signed char)-58;
unsigned short var_9 = (unsigned short)26157;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned int var_15 = 2446410315U;
unsigned int var_16 = 1640157203U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
