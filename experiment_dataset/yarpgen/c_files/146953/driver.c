#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = 1659470527;
long long int var_6 = -6454555635782029126LL;
unsigned long long int var_7 = 17502836569319918365ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)151;
signed char var_11 = (signed char)-117;
short var_13 = (short)-19558;
int var_14 = 1531471954;
unsigned int var_15 = 3692872900U;
unsigned int var_18 = 842005300U;
int zero = 0;
unsigned char var_19 = (unsigned char)239;
unsigned int var_20 = 2600331456U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
