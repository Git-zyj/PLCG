#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5413567567223624571LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-21775;
unsigned short var_6 = (unsigned short)1538;
int var_7 = -418982943;
int zero = 0;
short var_10 = (short)782;
signed char var_11 = (signed char)-12;
signed char var_12 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
