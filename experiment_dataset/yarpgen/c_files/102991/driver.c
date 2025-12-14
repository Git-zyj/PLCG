#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)55;
unsigned short var_7 = (unsigned short)61770;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 7630584152648412796ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)35395;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13128209353759095677ULL;
unsigned int var_19 = 1889778827U;
signed char var_20 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
