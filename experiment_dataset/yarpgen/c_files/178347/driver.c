#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 922741443261269894ULL;
unsigned long long int var_1 = 4648711212980867136ULL;
short var_5 = (short)-1383;
short var_6 = (short)7310;
int var_7 = -842830987;
short var_8 = (short)-27608;
short var_11 = (short)12677;
int zero = 0;
unsigned long long int var_13 = 5119093454569435531ULL;
unsigned long long int var_14 = 15959106248083883038ULL;
unsigned long long int var_15 = 3284400159916203511ULL;
unsigned long long int var_16 = 2547144642085732640ULL;
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
