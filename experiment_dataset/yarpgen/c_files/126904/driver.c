#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1122;
unsigned char var_2 = (unsigned char)179;
unsigned int var_4 = 1717548081U;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)14;
unsigned short var_14 = (unsigned short)27431;
int zero = 0;
unsigned short var_17 = (unsigned short)10698;
signed char var_18 = (signed char)-54;
void init() {
}

void checksum() {
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
