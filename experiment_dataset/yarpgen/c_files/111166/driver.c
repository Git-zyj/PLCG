#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 317208284U;
unsigned int var_1 = 338868594U;
long long int var_2 = 8727913823663974397LL;
int var_3 = 397744479;
unsigned long long int var_4 = 2005498878670928907ULL;
unsigned short var_6 = (unsigned short)53917;
short var_7 = (short)-25042;
unsigned int var_8 = 3869969810U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)59743;
unsigned short var_12 = (unsigned short)39877;
int var_13 = 1985802610;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
