#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18466;
unsigned short var_2 = (unsigned short)38842;
unsigned short var_3 = (unsigned short)47207;
unsigned short var_4 = (unsigned short)65265;
int var_7 = -91633582;
int zero = 0;
long long int var_10 = 5956164041563118764LL;
long long int var_11 = 6256227353735477081LL;
long long int var_12 = -1395077124591060669LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
