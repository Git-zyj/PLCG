#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5837427689099654269LL;
int var_4 = -1394944836;
int zero = 0;
long long int var_12 = -7965426504696216537LL;
unsigned long long int var_13 = 1923239702783404686ULL;
unsigned short var_14 = (unsigned short)10514;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
