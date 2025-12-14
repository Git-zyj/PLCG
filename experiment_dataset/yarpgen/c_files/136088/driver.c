#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59374;
short var_9 = (short)-27198;
unsigned int var_12 = 467057941U;
long long int var_14 = -3991713870297736202LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5774276982636687442LL;
unsigned short var_18 = (unsigned short)42719;
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
