#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-10;
signed char var_15 = (signed char)30;
unsigned char var_16 = (unsigned char)185;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-9873;
signed char var_21 = (signed char)123;
signed char var_22 = (signed char)-58;
unsigned long long int var_23 = 8889905367597185788ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
