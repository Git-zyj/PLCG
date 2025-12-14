#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)62;
short var_7 = (short)-15067;
signed char var_8 = (signed char)1;
unsigned short var_9 = (unsigned short)9543;
signed char var_12 = (signed char)35;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2805737103U;
int var_15 = 58365170;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
