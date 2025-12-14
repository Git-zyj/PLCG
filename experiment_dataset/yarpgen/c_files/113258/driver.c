#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_6 = -8781843484542222146LL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 2334686793U;
short var_19 = (short)1310;
int zero = 0;
unsigned short var_20 = (unsigned short)53968;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)917;
_Bool var_24 = (_Bool)0;
long long int var_25 = 4528345380625343743LL;
_Bool var_26 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
