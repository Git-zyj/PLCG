#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
long long int var_7 = 9090272865115265692LL;
unsigned long long int var_8 = 14760683112588961856ULL;
int zero = 0;
int var_16 = 155625461;
signed char var_17 = (signed char)-96;
long long int var_18 = -2416668629532185733LL;
void init() {
}

void checksum() {
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
