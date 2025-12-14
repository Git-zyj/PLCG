#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)108;
short var_8 = (short)16009;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-44;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)8751;
int zero = 0;
short var_17 = (short)18041;
unsigned long long int var_18 = 11105436296972226287ULL;
unsigned long long int var_19 = 11604378346228318827ULL;
unsigned char var_20 = (unsigned char)7;
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
