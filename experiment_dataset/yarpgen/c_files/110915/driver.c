#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12631;
long long int var_5 = -6827028938886825312LL;
long long int var_7 = -2568004363514590409LL;
unsigned char var_8 = (unsigned char)53;
int zero = 0;
unsigned int var_11 = 1499362300U;
short var_12 = (short)3930;
unsigned long long int var_13 = 296546498620849354ULL;
void init() {
}

void checksum() {
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
