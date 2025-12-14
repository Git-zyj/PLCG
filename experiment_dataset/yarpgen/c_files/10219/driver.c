#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
int var_3 = 1577075559;
unsigned int var_6 = 1558304305U;
unsigned int var_7 = 2497032912U;
unsigned long long int var_8 = 2690694879300688189ULL;
unsigned char var_11 = (unsigned char)101;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)14608;
int zero = 0;
signed char var_15 = (signed char)-53;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
