#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)23854;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2758945275U;
unsigned short var_5 = (unsigned short)27813;
int var_6 = 1205553225;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-24260;
unsigned int var_11 = 1995093022U;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
signed char var_14 = (signed char)57;
int var_15 = 1371640846;
unsigned short var_16 = (unsigned short)63478;
signed char var_17 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
