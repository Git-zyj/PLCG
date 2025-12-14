#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1199592466;
unsigned long long int var_6 = 11196169406500441376ULL;
short var_10 = (short)-27457;
int zero = 0;
unsigned short var_11 = (unsigned short)17647;
short var_12 = (short)-26173;
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
