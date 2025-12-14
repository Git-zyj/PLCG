#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 481655757;
unsigned char var_2 = (unsigned char)32;
int var_4 = -1756815598;
unsigned char var_12 = (unsigned char)70;
int var_14 = -1838594262;
unsigned short var_15 = (unsigned short)23258;
int zero = 0;
long long int var_16 = -8018775873664498219LL;
signed char var_17 = (signed char)108;
unsigned long long int var_18 = 10938460081084318717ULL;
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
