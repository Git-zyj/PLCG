#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
long long int var_1 = -5111517703795558576LL;
long long int var_3 = -6678925392430659265LL;
unsigned int var_5 = 2736100592U;
unsigned char var_7 = (unsigned char)221;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
int var_11 = -1217209861;
short var_12 = (short)-26269;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
