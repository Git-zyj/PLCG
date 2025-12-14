#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1245;
int var_3 = 1338642813;
unsigned long long int var_5 = 15758872292282883977ULL;
int var_7 = 945427313;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)-77;
int zero = 0;
unsigned short var_17 = (unsigned short)39731;
int var_18 = 1748933995;
int var_19 = 905324862;
unsigned int var_20 = 3442407523U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
