#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)80;
unsigned long long int var_6 = 13937217107175058228ULL;
unsigned char var_7 = (unsigned char)236;
short var_16 = (short)15272;
int zero = 0;
unsigned long long int var_18 = 2770300888140789534ULL;
long long int var_19 = -7119109863961368420LL;
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
