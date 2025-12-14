#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921622691;
int var_1 = 1363749837;
short var_7 = (short)-8059;
unsigned long long int var_8 = 1277999732000246519ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)44652;
unsigned long long int var_11 = 17469007205303130601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
