#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21991;
long long int var_3 = -8784643959211953488LL;
unsigned char var_5 = (unsigned char)10;
short var_10 = (short)-4145;
signed char var_16 = (signed char)-41;
unsigned long long int var_18 = 8976242228782771342ULL;
int zero = 0;
unsigned int var_20 = 1683063232U;
unsigned int var_21 = 1873546235U;
unsigned short var_22 = (unsigned short)32391;
unsigned int var_23 = 3920106781U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
