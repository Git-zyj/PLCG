#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11117;
unsigned char var_2 = (unsigned char)73;
unsigned char var_4 = (unsigned char)179;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)16;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)115;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
