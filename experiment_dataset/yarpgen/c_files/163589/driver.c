#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)62;
unsigned char var_7 = (unsigned char)93;
unsigned long long int var_10 = 1572492719098246514ULL;
short var_11 = (short)-21811;
int zero = 0;
signed char var_14 = (signed char)-112;
short var_15 = (short)-28816;
void init() {
}

void checksum() {
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
