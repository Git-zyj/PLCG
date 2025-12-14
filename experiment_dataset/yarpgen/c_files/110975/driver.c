#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned short var_4 = (unsigned short)1812;
unsigned char var_8 = (unsigned char)96;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)51229;
int var_15 = -969894411;
signed char var_17 = (signed char)-116;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)8200;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
