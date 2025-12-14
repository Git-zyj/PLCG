#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)215;
unsigned long long int var_5 = 5277476835134229752ULL;
long long int var_9 = 4028509795070959264LL;
unsigned char var_10 = (unsigned char)253;
signed char var_11 = (signed char)-9;
int zero = 0;
signed char var_13 = (signed char)-99;
signed char var_14 = (signed char)-50;
void init() {
}

void checksum() {
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
