#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned long long int var_1 = 1225516391138733424ULL;
unsigned short var_3 = (unsigned short)45409;
signed char var_10 = (signed char)74;
int zero = 0;
int var_20 = -1511087286;
long long int var_21 = 6273103409784607710LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
