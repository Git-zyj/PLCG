#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
signed char var_2 = (signed char)-33;
short var_7 = (short)7979;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -310447531511421464LL;
short var_18 = (short)-19427;
int zero = 0;
short var_19 = (short)29358;
short var_20 = (short)22300;
unsigned int var_21 = 2800774556U;
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
