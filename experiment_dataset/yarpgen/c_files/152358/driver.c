#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 421677523U;
int var_11 = -140551005;
unsigned short var_17 = (unsigned short)34534;
int zero = 0;
short var_20 = (short)-2460;
short var_21 = (short)-26935;
unsigned short var_22 = (unsigned short)20759;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
