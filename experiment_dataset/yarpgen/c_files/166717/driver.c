#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58711;
unsigned long long int var_9 = 4717621904516384391ULL;
unsigned int var_14 = 847335876U;
int var_15 = 78881282;
unsigned char var_17 = (unsigned char)131;
int zero = 0;
unsigned short var_18 = (unsigned short)58686;
long long int var_19 = 403291192785822284LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
