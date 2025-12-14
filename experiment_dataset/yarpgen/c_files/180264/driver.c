#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1297460569U;
int var_1 = -785832601;
unsigned long long int var_7 = 12173139750797208872ULL;
unsigned short var_8 = (unsigned short)26736;
int zero = 0;
unsigned long long int var_13 = 9355730731135323499ULL;
short var_14 = (short)-29817;
void init() {
}

void checksum() {
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
