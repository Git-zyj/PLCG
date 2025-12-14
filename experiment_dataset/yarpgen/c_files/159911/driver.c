#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-103;
signed char var_6 = (signed char)73;
unsigned long long int var_7 = 11725554632246166639ULL;
signed char var_8 = (signed char)-44;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9278178958032951456ULL;
int zero = 0;
short var_14 = (short)-11597;
unsigned short var_15 = (unsigned short)17565;
unsigned short var_16 = (unsigned short)59239;
unsigned long long int var_17 = 10152342228015817488ULL;
unsigned short var_18 = (unsigned short)45099;
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
