#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1732338293;
unsigned long long int var_4 = 5440252508971670432ULL;
unsigned long long int var_8 = 3588782835662975493ULL;
long long int var_11 = -6261655200946716971LL;
unsigned char var_16 = (unsigned char)36;
int zero = 0;
short var_18 = (short)748;
unsigned long long int var_19 = 2806658281635360006ULL;
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
