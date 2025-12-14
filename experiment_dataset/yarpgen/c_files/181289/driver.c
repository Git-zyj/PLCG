#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12414988674978704585ULL;
unsigned long long int var_4 = 1963422636548969126ULL;
long long int var_6 = 3181454869060343578LL;
unsigned long long int var_13 = 12779563402647038876ULL;
_Bool var_16 = (_Bool)1;
int var_18 = -736731706;
int zero = 0;
unsigned short var_20 = (unsigned short)59040;
short var_21 = (short)20060;
unsigned short var_22 = (unsigned short)2696;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3635855060U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
