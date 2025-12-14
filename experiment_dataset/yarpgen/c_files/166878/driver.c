#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)102;
short var_6 = (short)13015;
short var_7 = (short)-25940;
int var_8 = 1079770532;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = -2063351561401060114LL;
unsigned long long int var_18 = 6047820113208636880ULL;
unsigned char var_19 = (unsigned char)159;
short var_20 = (short)-19540;
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
