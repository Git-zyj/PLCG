#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -922397318;
unsigned short var_12 = (unsigned short)24958;
int var_13 = -477351747;
unsigned int var_14 = 1246129433U;
int zero = 0;
unsigned char var_18 = (unsigned char)80;
int var_19 = -624396580;
void init() {
}

void checksum() {
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
