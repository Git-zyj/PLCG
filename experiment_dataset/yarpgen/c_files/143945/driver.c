#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12381931218908999732ULL;
short var_3 = (short)-7039;
signed char var_6 = (signed char)124;
long long int var_8 = -8938799827306073646LL;
int zero = 0;
unsigned int var_17 = 717581716U;
unsigned long long int var_18 = 6424541336138117718ULL;
void init() {
}

void checksum() {
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
