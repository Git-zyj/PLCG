#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3105630163107116194LL;
short var_3 = (short)-13918;
int var_4 = -634124396;
int var_5 = 383633104;
unsigned char var_7 = (unsigned char)99;
int zero = 0;
unsigned char var_11 = (unsigned char)254;
short var_12 = (short)-11816;
unsigned long long int var_13 = 2532655884659883922ULL;
short var_14 = (short)12537;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
