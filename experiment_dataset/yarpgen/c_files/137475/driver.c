#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)12668;
signed char var_2 = (signed char)-76;
signed char var_5 = (signed char)-127;
int var_6 = -2058582942;
unsigned short var_11 = (unsigned short)61824;
int zero = 0;
long long int var_15 = -8276772323904014839LL;
unsigned short var_16 = (unsigned short)24013;
long long int var_17 = 29211078391293052LL;
signed char var_18 = (signed char)-97;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
