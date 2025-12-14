#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned short var_1 = (unsigned short)40425;
unsigned short var_2 = (unsigned short)7260;
unsigned short var_3 = (unsigned short)40293;
int var_5 = 718435206;
signed char var_8 = (signed char)121;
int zero = 0;
unsigned char var_14 = (unsigned char)199;
int var_15 = -415899014;
unsigned char var_16 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
