#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)47;
short var_3 = (short)28254;
short var_7 = (short)7137;
signed char var_9 = (signed char)95;
unsigned short var_11 = (unsigned short)56904;
signed char var_13 = (signed char)105;
short var_15 = (short)-11201;
int zero = 0;
signed char var_19 = (signed char)122;
unsigned short var_20 = (unsigned short)52568;
void init() {
}

void checksum() {
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
