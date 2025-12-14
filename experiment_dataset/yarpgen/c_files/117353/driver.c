#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 736975471;
long long int var_6 = -9071289816465263609LL;
unsigned short var_7 = (unsigned short)24060;
int var_9 = 1120919438;
unsigned short var_10 = (unsigned short)17570;
unsigned long long int var_11 = 11033496328927445551ULL;
int var_12 = -1925600492;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
unsigned int var_17 = 2750268719U;
signed char var_18 = (signed char)73;
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
