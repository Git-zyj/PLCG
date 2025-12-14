#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17184516068611410486ULL;
short var_1 = (short)7597;
unsigned short var_4 = (unsigned short)23651;
unsigned char var_15 = (unsigned char)0;
unsigned int var_17 = 3082624942U;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
unsigned short var_20 = (unsigned short)47933;
int var_21 = 1559569159;
unsigned long long int var_22 = 8161092956374704334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
