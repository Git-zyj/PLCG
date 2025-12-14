#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4051925602U;
unsigned short var_10 = (unsigned short)53958;
signed char var_13 = (signed char)8;
unsigned long long int var_14 = 10858162348481629035ULL;
int zero = 0;
signed char var_18 = (signed char)42;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)165;
void init() {
}

void checksum() {
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
