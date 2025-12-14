#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15660;
short var_2 = (short)25605;
unsigned int var_5 = 3804789212U;
unsigned int var_7 = 1590889522U;
int var_9 = -1748530558;
signed char var_11 = (signed char)-31;
signed char var_12 = (signed char)96;
int zero = 0;
signed char var_13 = (signed char)106;
unsigned int var_14 = 1587236969U;
short var_15 = (short)-19306;
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
