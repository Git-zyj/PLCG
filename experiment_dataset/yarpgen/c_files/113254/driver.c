#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1734595591U;
unsigned long long int var_9 = 607063800555008266ULL;
unsigned char var_10 = (unsigned char)219;
long long int var_11 = -7152682859339431699LL;
int zero = 0;
int var_12 = 1139742630;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)128;
long long int var_15 = -112552790348735178LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
