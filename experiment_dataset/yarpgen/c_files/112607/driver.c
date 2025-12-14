#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)167;
unsigned char var_3 = (unsigned char)188;
unsigned short var_6 = (unsigned short)43971;
int var_7 = -1452678491;
int var_9 = -1238442582;
int zero = 0;
int var_10 = -1103352842;
unsigned long long int var_11 = 1597959761148753457ULL;
int var_12 = 590413455;
int var_13 = -1372979991;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
