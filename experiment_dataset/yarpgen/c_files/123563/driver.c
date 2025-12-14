#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
unsigned long long int var_3 = 12135100179486471840ULL;
signed char var_5 = (signed char)67;
unsigned char var_6 = (unsigned char)10;
int zero = 0;
unsigned short var_14 = (unsigned short)23862;
unsigned long long int var_15 = 6454294396111468775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
