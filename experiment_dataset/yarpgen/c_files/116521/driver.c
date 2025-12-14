#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5560947646501196442ULL;
unsigned char var_6 = (unsigned char)13;
unsigned short var_7 = (unsigned short)49271;
unsigned char var_9 = (unsigned char)134;
unsigned long long int var_10 = 6285426788446281441ULL;
unsigned short var_13 = (unsigned short)4480;
int zero = 0;
unsigned char var_15 = (unsigned char)76;
unsigned long long int var_16 = 2336155976485099450ULL;
int var_17 = 322105311;
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
