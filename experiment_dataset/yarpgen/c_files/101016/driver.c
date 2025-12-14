#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)(-127 - 1);
int var_5 = 1947953828;
signed char var_8 = (signed char)2;
signed char var_11 = (signed char)26;
signed char var_12 = (signed char)33;
long long int var_17 = 4428455856844941522LL;
short var_18 = (short)5934;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-80;
signed char var_21 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
