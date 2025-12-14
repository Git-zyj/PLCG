#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -94862071;
unsigned long long int var_7 = 3853165763400946914ULL;
signed char var_9 = (signed char)109;
unsigned long long int var_13 = 1078740808078934088ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-7789;
signed char var_16 = (signed char)-86;
_Bool var_17 = (_Bool)1;
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
