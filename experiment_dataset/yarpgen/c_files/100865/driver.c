#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3010668082496271685ULL;
int var_5 = 186563848;
unsigned int var_8 = 2304790948U;
short var_11 = (short)31119;
short var_13 = (short)-7419;
int zero = 0;
signed char var_14 = (signed char)-69;
signed char var_15 = (signed char)-5;
short var_16 = (short)32061;
signed char var_17 = (signed char)50;
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
