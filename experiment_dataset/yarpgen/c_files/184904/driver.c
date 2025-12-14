#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14984;
unsigned long long int var_3 = 9794174616228067403ULL;
unsigned char var_4 = (unsigned char)21;
_Bool var_5 = (_Bool)0;
int var_6 = -1465805915;
short var_15 = (short)-5348;
int zero = 0;
unsigned short var_16 = (unsigned short)57599;
unsigned short var_17 = (unsigned short)12803;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
