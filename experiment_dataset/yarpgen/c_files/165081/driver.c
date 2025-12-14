#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1628572166;
int var_8 = 338918679;
short var_9 = (short)25367;
int var_11 = 1005499359;
int zero = 0;
unsigned short var_12 = (unsigned short)52907;
short var_13 = (short)-21573;
unsigned short var_14 = (unsigned short)19140;
unsigned long long int var_15 = 8777237790203217494ULL;
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
