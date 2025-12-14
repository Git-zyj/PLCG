#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)97;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1555777719U;
int var_10 = -2133676041;
int zero = 0;
signed char var_13 = (signed char)-35;
short var_14 = (short)23321;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
