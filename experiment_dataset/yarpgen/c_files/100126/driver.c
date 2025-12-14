#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7405440873208138180LL;
unsigned short var_3 = (unsigned short)53938;
unsigned char var_8 = (unsigned char)59;
unsigned char var_9 = (unsigned char)196;
unsigned short var_10 = (unsigned short)56315;
unsigned char var_11 = (unsigned char)135;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)87;
_Bool var_17 = (_Bool)1;
short var_18 = (short)4589;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
