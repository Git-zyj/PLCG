#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
signed char var_3 = (signed char)11;
signed char var_4 = (signed char)88;
unsigned char var_8 = (unsigned char)110;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)189;
unsigned short var_12 = (unsigned short)42009;
int zero = 0;
unsigned char var_14 = (unsigned char)197;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-73;
void init() {
}

void checksum() {
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
