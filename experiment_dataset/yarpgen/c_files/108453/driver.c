#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned char var_3 = (unsigned char)192;
unsigned short var_7 = (unsigned short)61731;
unsigned long long int var_10 = 6768905299525217405ULL;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-127;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
short var_18 = (short)19712;
unsigned long long int var_19 = 22744508007291741ULL;
unsigned char var_20 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
