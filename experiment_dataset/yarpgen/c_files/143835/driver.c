#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1720710605;
short var_4 = (short)13368;
unsigned short var_5 = (unsigned short)62340;
unsigned char var_6 = (unsigned char)55;
int zero = 0;
int var_10 = 1035636574;
int var_11 = -694670391;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
