#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15907;
short var_5 = (short)-2089;
int var_6 = -1181303677;
int var_8 = 52522952;
unsigned int var_9 = 3750642663U;
unsigned char var_12 = (unsigned char)223;
int zero = 0;
unsigned char var_15 = (unsigned char)40;
unsigned short var_16 = (unsigned short)38011;
unsigned char var_17 = (unsigned char)74;
void init() {
}

void checksum() {
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
