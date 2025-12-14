#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49714;
unsigned char var_6 = (unsigned char)30;
short var_8 = (short)26568;
short var_10 = (short)28021;
unsigned short var_12 = (unsigned short)55213;
short var_13 = (short)17411;
int zero = 0;
unsigned short var_17 = (unsigned short)18253;
unsigned short var_18 = (unsigned short)54892;
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
