#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3341;
signed char var_5 = (signed char)-112;
int var_8 = 688567915;
long long int var_9 = -7770148779136256390LL;
unsigned short var_10 = (unsigned short)2711;
short var_17 = (short)17799;
int zero = 0;
unsigned int var_18 = 3886371014U;
unsigned short var_19 = (unsigned short)11887;
void init() {
}

void checksum() {
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
