#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3144792868U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2965344787142780493ULL;
signed char var_6 = (signed char)19;
short var_10 = (short)-26407;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)7;
unsigned char var_15 = (unsigned char)118;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2687248476U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
