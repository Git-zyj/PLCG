#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23529;
unsigned char var_2 = (unsigned char)117;
short var_4 = (short)22494;
int var_6 = -1773330609;
int zero = 0;
unsigned short var_11 = (unsigned short)42028;
unsigned char var_12 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
