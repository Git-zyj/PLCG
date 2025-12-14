#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
signed char var_3 = (signed char)-86;
unsigned int var_7 = 315194872U;
unsigned short var_11 = (unsigned short)27325;
signed char var_12 = (signed char)-28;
unsigned short var_13 = (unsigned short)56547;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)55625;
unsigned short var_18 = (unsigned short)13767;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
short var_21 = (short)22958;
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
