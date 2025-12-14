#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5954547400849856594LL;
unsigned long long int var_2 = 14856020432800814278ULL;
unsigned short var_8 = (unsigned short)47940;
int zero = 0;
short var_12 = (short)-22828;
unsigned long long int var_13 = 14818794253943204276ULL;
void init() {
}

void checksum() {
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
