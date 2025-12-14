#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
int var_1 = -1166866806;
signed char var_3 = (signed char)24;
unsigned short var_4 = (unsigned short)49950;
unsigned short var_6 = (unsigned short)20523;
unsigned long long int var_11 = 7135004212682420304ULL;
int zero = 0;
short var_12 = (short)-18239;
short var_13 = (short)28793;
unsigned char var_14 = (unsigned char)155;
unsigned long long int var_15 = 16757535851764699178ULL;
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
