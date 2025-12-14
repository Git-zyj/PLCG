#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)32843;
unsigned short var_10 = (unsigned short)57471;
short var_12 = (short)18330;
unsigned short var_16 = (unsigned short)992;
int zero = 0;
short var_18 = (short)12446;
unsigned short var_19 = (unsigned short)60148;
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
