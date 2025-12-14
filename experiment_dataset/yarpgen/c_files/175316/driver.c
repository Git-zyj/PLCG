#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28531;
unsigned long long int var_9 = 6816931716236745784ULL;
unsigned int var_10 = 1820973234U;
int zero = 0;
unsigned int var_13 = 3967322875U;
short var_14 = (short)15212;
unsigned long long int var_15 = 16887067013244338817ULL;
void init() {
}

void checksum() {
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
