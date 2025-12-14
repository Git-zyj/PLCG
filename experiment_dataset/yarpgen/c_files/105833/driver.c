#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
unsigned char var_7 = (unsigned char)130;
unsigned int var_10 = 2863041914U;
int zero = 0;
unsigned int var_11 = 1141833008U;
unsigned char var_12 = (unsigned char)106;
short var_13 = (short)-21926;
unsigned short var_14 = (unsigned short)34980;
short var_15 = (short)-6678;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
