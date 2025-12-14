#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-7099;
signed char var_9 = (signed char)-116;
int var_13 = 592209997;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
unsigned int var_17 = 1602380524U;
long long int var_18 = 6903774975661882292LL;
unsigned char var_19 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
