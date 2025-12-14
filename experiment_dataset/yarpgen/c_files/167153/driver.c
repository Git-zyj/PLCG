#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
signed char var_3 = (signed char)-83;
short var_4 = (short)2578;
_Bool var_5 = (_Bool)0;
short var_8 = (short)13013;
int zero = 0;
int var_10 = -873306375;
short var_11 = (short)-29261;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
