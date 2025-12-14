#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4206;
unsigned short var_2 = (unsigned short)44770;
int var_3 = -307224639;
short var_4 = (short)-823;
unsigned short var_7 = (unsigned short)58174;
int var_8 = 406468314;
unsigned short var_13 = (unsigned short)7498;
int zero = 0;
int var_15 = 1060536016;
short var_16 = (short)5511;
unsigned short var_17 = (unsigned short)39987;
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
