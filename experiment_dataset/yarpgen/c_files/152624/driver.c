#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -608045536110052552LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_15 = -508444635954655686LL;
int var_16 = 2113585167;
int zero = 0;
unsigned short var_17 = (unsigned short)17124;
unsigned short var_18 = (unsigned short)56489;
void init() {
}

void checksum() {
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
