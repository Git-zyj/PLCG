#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1350309043;
unsigned int var_10 = 696066771U;
unsigned short var_16 = (unsigned short)13022;
int zero = 0;
long long int var_19 = 6646779273543628740LL;
unsigned short var_20 = (unsigned short)43869;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
