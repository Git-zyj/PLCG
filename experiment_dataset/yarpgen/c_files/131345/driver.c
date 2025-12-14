#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8488487384350997469LL;
short var_5 = (short)-16879;
long long int var_6 = 2487282452569951473LL;
unsigned int var_10 = 3405913247U;
int zero = 0;
signed char var_16 = (signed char)15;
long long int var_17 = -3090288479387175772LL;
unsigned short var_18 = (unsigned short)24638;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
