#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1728722921;
unsigned char var_3 = (unsigned char)152;
unsigned short var_6 = (unsigned short)17720;
int zero = 0;
int var_17 = -1565834887;
int var_18 = 510034505;
int var_19 = -1141596949;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
