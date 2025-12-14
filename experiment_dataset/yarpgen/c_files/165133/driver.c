#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25269;
unsigned long long int var_1 = 1953031971119137556ULL;
short var_3 = (short)15644;
long long int var_8 = -7741816822901275522LL;
int zero = 0;
int var_16 = 81997716;
unsigned short var_17 = (unsigned short)35303;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
