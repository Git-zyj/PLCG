#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25011;
unsigned long long int var_4 = 13640389507403890036ULL;
short var_8 = (short)31588;
short var_11 = (short)-7580;
unsigned long long int var_12 = 5721851933043041308ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)45497;
unsigned short var_17 = (unsigned short)7970;
short var_18 = (short)-27291;
short var_19 = (short)4855;
unsigned long long int var_20 = 8978511912430058167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
