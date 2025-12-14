#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3254407707U;
long long int var_4 = -6854509769938241036LL;
unsigned short var_7 = (unsigned short)64193;
long long int var_9 = 8294339256683496588LL;
int zero = 0;
unsigned short var_10 = (unsigned short)2252;
unsigned int var_11 = 1444193509U;
unsigned short var_12 = (unsigned short)50043;
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
