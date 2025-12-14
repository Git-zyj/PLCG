#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24005;
short var_1 = (short)4768;
unsigned char var_4 = (unsigned char)41;
unsigned char var_6 = (unsigned char)21;
unsigned long long int var_7 = 13278528104891694964ULL;
unsigned short var_8 = (unsigned short)17831;
unsigned char var_9 = (unsigned char)252;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)107;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)254;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
