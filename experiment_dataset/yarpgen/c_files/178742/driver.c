#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
unsigned long long int var_2 = 15652435057254568541ULL;
unsigned short var_6 = (unsigned short)19592;
unsigned long long int var_7 = 5625067834624914476ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)29;
unsigned int var_15 = 3137366511U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
