#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1334579208;
short var_6 = (short)-28924;
unsigned char var_7 = (unsigned char)157;
unsigned long long int var_8 = 16840699011470085090ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)47772;
short var_13 = (short)3185;
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
