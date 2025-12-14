#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-24047;
short var_8 = (short)-19480;
int zero = 0;
short var_10 = (short)14686;
long long int var_11 = 1118796723119520274LL;
unsigned long long int var_12 = 9026598361037611129ULL;
short var_13 = (short)16135;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
