#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 282715376;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)0;
int var_11 = -577916721;
signed char var_14 = (signed char)-73;
_Bool var_17 = (_Bool)1;
short var_19 = (short)-24027;
int zero = 0;
long long int var_20 = 3187401830754248958LL;
short var_21 = (short)10351;
long long int var_22 = -7973583211105959378LL;
_Bool var_23 = (_Bool)0;
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
