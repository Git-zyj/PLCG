#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-9663;
short var_7 = (short)14129;
signed char var_12 = (signed char)56;
unsigned int var_13 = 3759509750U;
int zero = 0;
unsigned int var_19 = 729265259U;
short var_20 = (short)8497;
short var_21 = (short)9729;
void init() {
}

void checksum() {
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
