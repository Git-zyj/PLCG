#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1853;
int var_5 = -1574261111;
long long int var_6 = 8455070257202191060LL;
unsigned char var_12 = (unsigned char)154;
long long int var_16 = -1114905516509440928LL;
int zero = 0;
unsigned long long int var_20 = 1090787818302588114ULL;
short var_21 = (short)-15301;
void init() {
}

void checksum() {
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
