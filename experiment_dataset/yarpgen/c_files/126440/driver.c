#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
signed char var_3 = (signed char)41;
unsigned char var_10 = (unsigned char)43;
unsigned short var_13 = (unsigned short)52652;
signed char var_17 = (signed char)111;
int zero = 0;
unsigned short var_19 = (unsigned short)41808;
unsigned short var_20 = (unsigned short)55160;
short var_21 = (short)18598;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
