#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned int var_3 = 2257895799U;
int var_4 = 1949686000;
long long int var_6 = 782045850514752621LL;
unsigned char var_7 = (unsigned char)252;
long long int var_8 = 7823017990848166470LL;
int var_9 = 1502293315;
short var_13 = (short)24802;
signed char var_14 = (signed char)-41;
long long int var_17 = -8393819379137080403LL;
int zero = 0;
signed char var_18 = (signed char)-48;
unsigned char var_19 = (unsigned char)239;
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
