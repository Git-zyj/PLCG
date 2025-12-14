#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1352970810;
int var_1 = -738450488;
short var_2 = (short)7328;
signed char var_4 = (signed char)-92;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)62;
int var_9 = -1338455688;
signed char var_11 = (signed char)4;
unsigned short var_12 = (unsigned short)41702;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
signed char var_14 = (signed char)64;
unsigned short var_15 = (unsigned short)52127;
void init() {
}

void checksum() {
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
