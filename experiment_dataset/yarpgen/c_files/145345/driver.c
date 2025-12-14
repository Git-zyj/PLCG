#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)14048;
unsigned short var_8 = (unsigned short)12307;
signed char var_9 = (signed char)-85;
int zero = 0;
short var_13 = (short)-11903;
unsigned char var_14 = (unsigned char)107;
short var_15 = (short)6739;
unsigned char var_16 = (unsigned char)64;
unsigned short var_17 = (unsigned short)58739;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
