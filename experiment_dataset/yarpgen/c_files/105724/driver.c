#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27307;
unsigned char var_4 = (unsigned char)105;
int var_6 = -582670295;
short var_10 = (short)133;
int zero = 0;
unsigned char var_13 = (unsigned char)9;
unsigned long long int var_14 = 13801354199106578596ULL;
unsigned char var_15 = (unsigned char)219;
unsigned long long int var_16 = 2619647608772149852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
