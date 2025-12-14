#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9970;
unsigned short var_3 = (unsigned short)38610;
unsigned short var_4 = (unsigned short)58721;
signed char var_10 = (signed char)-125;
unsigned short var_13 = (unsigned short)6166;
unsigned char var_15 = (unsigned char)137;
int zero = 0;
unsigned char var_19 = (unsigned char)23;
unsigned int var_20 = 3541361501U;
int var_21 = -1454837042;
unsigned char var_22 = (unsigned char)2;
short var_23 = (short)18281;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
