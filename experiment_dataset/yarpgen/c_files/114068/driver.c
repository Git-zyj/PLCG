#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1547879909;
unsigned int var_8 = 2773300206U;
short var_12 = (short)-13790;
int var_17 = -956339659;
int var_19 = -453469533;
int zero = 0;
signed char var_20 = (signed char)-58;
_Bool var_21 = (_Bool)1;
long long int var_22 = -784393985754358667LL;
void init() {
}

void checksum() {
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
