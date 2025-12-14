#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned char var_1 = (unsigned char)34;
short var_6 = (short)-26935;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)47;
unsigned int var_11 = 374193086U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1626413006U;
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
