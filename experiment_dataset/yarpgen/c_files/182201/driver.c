#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51811;
unsigned char var_6 = (unsigned char)69;
unsigned char var_8 = (unsigned char)189;
unsigned char var_9 = (unsigned char)201;
short var_10 = (short)11006;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12336347902126775624ULL;
int zero = 0;
int var_14 = -160696999;
unsigned long long int var_15 = 8598642783427832186ULL;
short var_16 = (short)-3387;
int var_17 = 950743396;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
