#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
short var_3 = (short)21893;
short var_7 = (short)23298;
short var_9 = (short)-9811;
int zero = 0;
short var_10 = (short)23712;
unsigned short var_11 = (unsigned short)58044;
unsigned long long int var_12 = 16925041295921704790ULL;
unsigned short var_13 = (unsigned short)26815;
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
