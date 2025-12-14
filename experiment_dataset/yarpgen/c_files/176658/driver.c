#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
unsigned long long int var_8 = 1465523998467576532ULL;
unsigned char var_10 = (unsigned char)154;
unsigned short var_11 = (unsigned short)49287;
int zero = 0;
long long int var_15 = 4666013217135454374LL;
unsigned long long int var_16 = 3561570206510346736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
