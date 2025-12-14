#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
unsigned int var_2 = 1372650335U;
unsigned short var_4 = (unsigned short)18147;
unsigned short var_6 = (unsigned short)24568;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)26968;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)28960;
signed char var_17 = (signed char)-69;
int zero = 0;
signed char var_18 = (signed char)-105;
signed char var_19 = (signed char)-80;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
