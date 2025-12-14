#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2140;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)82;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)125;
unsigned char var_8 = (unsigned char)7;
int zero = 0;
signed char var_10 = (signed char)-96;
unsigned short var_11 = (unsigned short)62036;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
