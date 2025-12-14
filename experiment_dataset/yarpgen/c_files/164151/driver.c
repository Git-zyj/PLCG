#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned char var_3 = (unsigned char)210;
unsigned char var_4 = (unsigned char)17;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_13 = (short)-9516;
unsigned short var_14 = (unsigned short)62726;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
