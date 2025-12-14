#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3962956746651253091LL;
unsigned char var_7 = (unsigned char)71;
unsigned char var_10 = (unsigned char)89;
int zero = 0;
int var_11 = -755626902;
long long int var_12 = 1143793633326138669LL;
unsigned short var_13 = (unsigned short)37025;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
