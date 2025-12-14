#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
signed char var_3 = (signed char)70;
unsigned short var_5 = (unsigned short)53210;
unsigned int var_10 = 4229233400U;
unsigned short var_12 = (unsigned short)58524;
int zero = 0;
unsigned short var_16 = (unsigned short)10674;
unsigned short var_17 = (unsigned short)60122;
void init() {
}

void checksum() {
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
