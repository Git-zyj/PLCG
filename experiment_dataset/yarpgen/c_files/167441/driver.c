#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29229;
signed char var_1 = (signed char)70;
signed char var_2 = (signed char)-75;
signed char var_3 = (signed char)47;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)26343;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)10;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)16922;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
