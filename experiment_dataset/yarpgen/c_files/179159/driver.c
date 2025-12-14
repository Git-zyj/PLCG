#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 864594548U;
unsigned char var_2 = (unsigned char)229;
unsigned short var_3 = (unsigned short)9067;
short var_4 = (short)26019;
signed char var_6 = (signed char)80;
unsigned char var_7 = (unsigned char)51;
unsigned int var_8 = 1705591156U;
int zero = 0;
unsigned char var_10 = (unsigned char)197;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)200;
unsigned short var_13 = (unsigned short)48513;
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
