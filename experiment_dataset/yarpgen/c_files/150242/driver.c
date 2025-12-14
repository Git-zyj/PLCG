#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)8620;
long long int var_12 = 3762567439561189709LL;
unsigned short var_14 = (unsigned short)12846;
short var_17 = (short)17916;
int zero = 0;
long long int var_20 = 6697771857927669422LL;
short var_21 = (short)20854;
short var_22 = (short)29356;
unsigned long long int var_23 = 10338319818337932441ULL;
short var_24 = (short)-27193;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
