#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13644;
unsigned short var_3 = (unsigned short)40257;
unsigned short var_5 = (unsigned short)13376;
unsigned short var_6 = (unsigned short)8251;
unsigned short var_7 = (unsigned short)47249;
unsigned short var_9 = (unsigned short)59453;
unsigned short var_13 = (unsigned short)29894;
int zero = 0;
unsigned short var_14 = (unsigned short)58416;
unsigned short var_15 = (unsigned short)5779;
unsigned short var_16 = (unsigned short)25050;
unsigned short var_17 = (unsigned short)60979;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
