#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)116;
unsigned short var_12 = (unsigned short)45506;
unsigned char var_13 = (unsigned char)231;
unsigned long long int var_14 = 17122761688510925619ULL;
int zero = 0;
unsigned long long int var_15 = 10532537590113464831ULL;
unsigned long long int var_16 = 18218461098818458632ULL;
unsigned short var_17 = (unsigned short)10345;
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
