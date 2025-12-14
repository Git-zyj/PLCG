#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)0;
int var_5 = -1886172272;
unsigned int var_6 = 4162915599U;
unsigned int var_8 = 1252955847U;
signed char var_11 = (signed char)97;
signed char var_12 = (signed char)-21;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2284045190U;
int zero = 0;
signed char var_15 = (signed char)-66;
unsigned short var_16 = (unsigned short)55082;
void init() {
}

void checksum() {
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
