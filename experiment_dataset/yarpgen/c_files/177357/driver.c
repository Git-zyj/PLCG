#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1503887652U;
short var_4 = (short)-20984;
unsigned int var_5 = 3712950183U;
short var_6 = (short)-3368;
unsigned short var_8 = (unsigned short)25726;
short var_11 = (short)12908;
unsigned short var_14 = (unsigned short)15170;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)229;
short var_20 = (short)3891;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
