#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4805448668767675147ULL;
unsigned short var_2 = (unsigned short)55827;
unsigned char var_3 = (unsigned char)58;
unsigned long long int var_4 = 8829829766777335293ULL;
int var_5 = 1024170306;
int var_6 = 2000893040;
short var_7 = (short)-7392;
unsigned long long int var_8 = 10293146808379952081ULL;
signed char var_9 = (signed char)-38;
unsigned char var_11 = (unsigned char)207;
int zero = 0;
int var_12 = 1388089442;
unsigned short var_13 = (unsigned short)34549;
signed char var_14 = (signed char)48;
signed char var_15 = (signed char)-42;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
