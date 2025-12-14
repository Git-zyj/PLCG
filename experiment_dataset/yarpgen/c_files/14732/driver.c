#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64192;
unsigned short var_2 = (unsigned short)59262;
unsigned char var_4 = (unsigned char)226;
unsigned char var_5 = (unsigned char)128;
int var_7 = 129533144;
unsigned char var_8 = (unsigned char)24;
int var_9 = -991260732;
unsigned short var_10 = (unsigned short)7344;
int zero = 0;
unsigned long long int var_12 = 8905670644501885993ULL;
unsigned int var_13 = 1482928964U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
