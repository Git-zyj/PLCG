#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)50;
short var_4 = (short)26489;
signed char var_6 = (signed char)92;
unsigned char var_10 = (unsigned char)134;
signed char var_13 = (signed char)-60;
int zero = 0;
short var_16 = (short)-11740;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-76;
unsigned char var_19 = (unsigned char)103;
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
