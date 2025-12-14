#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3744264064U;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
unsigned long long int var_17 = 11932175799767329062ULL;
short var_18 = (short)23024;
void init() {
}

void checksum() {
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
