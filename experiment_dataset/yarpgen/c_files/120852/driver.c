#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7446947914147204690LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-105;
short var_10 = (short)-15840;
unsigned int var_11 = 4284373128U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_18 = (short)3803;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-29563;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
