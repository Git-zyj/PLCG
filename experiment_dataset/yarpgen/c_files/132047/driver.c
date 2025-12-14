#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8795293598436218970LL;
unsigned char var_1 = (unsigned char)252;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_7 = (short)5051;
long long int var_10 = -1001242769077996004LL;
unsigned int var_14 = 437731968U;
int zero = 0;
short var_16 = (short)-19879;
short var_17 = (short)18066;
short var_18 = (short)-8862;
int var_19 = -2110952402;
void init() {
}

void checksum() {
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
