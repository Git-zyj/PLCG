#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_3 = (short)26064;
_Bool var_4 = (_Bool)0;
int var_7 = 475783973;
unsigned int var_9 = 2986778553U;
int zero = 0;
signed char var_10 = (signed char)5;
unsigned char var_11 = (unsigned char)209;
unsigned short var_12 = (unsigned short)57745;
short var_13 = (short)-6508;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
