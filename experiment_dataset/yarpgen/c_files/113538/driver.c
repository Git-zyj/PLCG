#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1745737967375964565LL;
unsigned char var_5 = (unsigned char)125;
int var_6 = 1452828130;
int var_7 = -816926799;
unsigned short var_13 = (unsigned short)41263;
int zero = 0;
unsigned short var_15 = (unsigned short)24196;
unsigned short var_16 = (unsigned short)51242;
unsigned char var_17 = (unsigned char)19;
signed char var_18 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
