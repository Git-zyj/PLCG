#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 17295597124617828715ULL;
short var_5 = (short)12519;
unsigned long long int var_9 = 8537865212123489303ULL;
long long int var_11 = 9034222759730582058LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-28166;
int var_19 = 2096931337;
unsigned short var_20 = (unsigned short)25783;
short var_21 = (short)3450;
signed char var_22 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
