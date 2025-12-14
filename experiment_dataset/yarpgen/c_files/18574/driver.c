#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10351053105925101280ULL;
unsigned char var_2 = (unsigned char)52;
int var_3 = -533252512;
int var_5 = 1351492742;
unsigned short var_9 = (unsigned short)41782;
unsigned short var_10 = (unsigned short)20625;
int var_11 = -1547436121;
int zero = 0;
unsigned short var_12 = (unsigned short)42364;
int var_13 = 463092256;
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
