#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
short var_6 = (short)18764;
short var_7 = (short)23059;
unsigned char var_8 = (unsigned char)148;
unsigned int var_10 = 4256098775U;
int zero = 0;
unsigned short var_14 = (unsigned short)15367;
short var_15 = (short)-24666;
int var_16 = -1566503596;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
