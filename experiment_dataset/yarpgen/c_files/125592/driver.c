#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 456227560;
unsigned short var_9 = (unsigned short)43486;
unsigned long long int var_10 = 9440427532318360285ULL;
signed char var_11 = (signed char)-123;
signed char var_13 = (signed char)-50;
int zero = 0;
signed char var_15 = (signed char)115;
short var_16 = (short)-4905;
long long int var_17 = -7533173534370963705LL;
void init() {
}

void checksum() {
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
