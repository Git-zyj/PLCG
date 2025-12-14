#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-105;
signed char var_5 = (signed char)46;
int var_10 = -682700714;
unsigned long long int var_12 = 6002721819378605069ULL;
int zero = 0;
unsigned long long int var_13 = 11223655583318085826ULL;
unsigned short var_14 = (unsigned short)23358;
unsigned long long int var_15 = 11695391850621759253ULL;
void init() {
}

void checksum() {
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
