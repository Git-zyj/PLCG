#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
int var_6 = -1754264443;
signed char var_8 = (signed char)-33;
unsigned int var_10 = 2163120477U;
int var_12 = -1564738828;
int zero = 0;
unsigned short var_13 = (unsigned short)45940;
signed char var_14 = (signed char)59;
short var_15 = (short)31644;
short var_16 = (short)-21994;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
