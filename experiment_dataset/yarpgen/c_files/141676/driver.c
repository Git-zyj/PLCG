#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10498;
long long int var_5 = 7858834928660672441LL;
unsigned char var_6 = (unsigned char)131;
long long int var_8 = -4189693996002123962LL;
short var_9 = (short)1969;
int zero = 0;
long long int var_10 = -5648093530775156282LL;
unsigned short var_11 = (unsigned short)11888;
int var_12 = -1126068103;
unsigned long long int var_13 = 5026608831094239991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
