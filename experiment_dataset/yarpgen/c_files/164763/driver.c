#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6098961188667559250ULL;
unsigned long long int var_3 = 2865564250079664016ULL;
signed char var_5 = (signed char)74;
unsigned short var_6 = (unsigned short)48970;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
short var_10 = (short)-26105;
unsigned short var_11 = (unsigned short)62883;
int var_12 = 57918729;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
