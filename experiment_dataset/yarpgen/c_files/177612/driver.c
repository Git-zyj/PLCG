#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3307751422957230617LL;
signed char var_1 = (signed char)96;
unsigned char var_5 = (unsigned char)223;
int var_6 = -1294679455;
unsigned char var_7 = (unsigned char)217;
unsigned int var_8 = 821674145U;
short var_10 = (short)-28008;
int zero = 0;
unsigned char var_13 = (unsigned char)113;
unsigned int var_14 = 1434809715U;
signed char var_15 = (signed char)-72;
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
