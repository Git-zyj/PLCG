#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7583;
unsigned char var_1 = (unsigned char)26;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)103;
signed char var_7 = (signed char)-115;
unsigned short var_11 = (unsigned short)7137;
int zero = 0;
unsigned char var_12 = (unsigned char)110;
_Bool var_13 = (_Bool)1;
int var_14 = 204812534;
unsigned short var_15 = (unsigned short)37043;
signed char var_16 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
