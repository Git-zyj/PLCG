#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20740;
int var_8 = 162549744;
unsigned short var_9 = (unsigned short)24127;
unsigned char var_11 = (unsigned char)233;
unsigned long long int var_13 = 12162715082639364763ULL;
unsigned long long int var_14 = 13174667420926547204ULL;
int zero = 0;
unsigned long long int var_15 = 2527712822537427058ULL;
unsigned short var_16 = (unsigned short)26325;
unsigned char var_17 = (unsigned char)177;
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
