#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9682497115124336784ULL;
unsigned short var_11 = (unsigned short)18691;
unsigned int var_16 = 3251251677U;
int zero = 0;
short var_19 = (short)-3747;
unsigned long long int var_20 = 3166670451579637334ULL;
unsigned char var_21 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
