#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
short var_1 = (short)3199;
unsigned char var_3 = (unsigned char)179;
unsigned long long int var_4 = 126740121947117092ULL;
unsigned short var_5 = (unsigned short)19976;
short var_6 = (short)-6022;
unsigned short var_7 = (unsigned short)46066;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 2052683501U;
int zero = 0;
unsigned char var_13 = (unsigned char)54;
unsigned short var_14 = (unsigned short)56402;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
