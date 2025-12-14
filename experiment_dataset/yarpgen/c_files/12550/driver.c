#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8191;
unsigned short var_1 = (unsigned short)8609;
int var_2 = 545945120;
long long int var_5 = 6939401577073400835LL;
unsigned short var_6 = (unsigned short)20740;
int zero = 0;
int var_10 = 1484213372;
unsigned short var_11 = (unsigned short)58349;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
