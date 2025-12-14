#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
unsigned long long int var_6 = 4838465974556971064ULL;
long long int var_10 = 1400567697297588122LL;
short var_15 = (short)6521;
unsigned int var_16 = 3557925997U;
signed char var_18 = (signed char)44;
int zero = 0;
signed char var_20 = (signed char)-58;
unsigned char var_21 = (unsigned char)210;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)129;
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
