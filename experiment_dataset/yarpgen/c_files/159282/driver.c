#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
int var_4 = -1719781925;
signed char var_11 = (signed char)-94;
int zero = 0;
short var_15 = (short)14816;
signed char var_16 = (signed char)76;
short var_17 = (short)-27034;
unsigned long long int var_18 = 577687414589875339ULL;
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
