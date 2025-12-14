#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned short var_1 = (unsigned short)55436;
unsigned short var_7 = (unsigned short)13482;
unsigned char var_8 = (unsigned char)162;
unsigned int var_14 = 1706039075U;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)45013;
short var_21 = (short)-11118;
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
