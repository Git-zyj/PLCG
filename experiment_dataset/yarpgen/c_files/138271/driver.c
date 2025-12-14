#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)76;
short var_10 = (short)-22706;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)122;
int zero = 0;
signed char var_20 = (signed char)-62;
signed char var_21 = (signed char)-124;
int var_22 = 1421757952;
unsigned long long int var_23 = 4538667160394123709ULL;
void init() {
}

void checksum() {
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
