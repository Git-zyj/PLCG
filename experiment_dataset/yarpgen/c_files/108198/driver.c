#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1392638915U;
unsigned long long int var_9 = 11037950003386900462ULL;
int zero = 0;
unsigned int var_16 = 4245763274U;
unsigned char var_17 = (unsigned char)152;
unsigned short var_18 = (unsigned short)21361;
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
