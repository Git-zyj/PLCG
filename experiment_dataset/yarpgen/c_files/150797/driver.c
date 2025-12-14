#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 46141376;
unsigned short var_4 = (unsigned short)21227;
long long int var_8 = -1853022033939346144LL;
int zero = 0;
int var_15 = -330008262;
signed char var_16 = (signed char)35;
long long int var_17 = -3453062413716142665LL;
unsigned long long int var_18 = 5394946074035678152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
