#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -285183204;
unsigned char var_3 = (unsigned char)249;
long long int var_4 = -5664112160476398176LL;
int var_12 = 993847845;
short var_13 = (short)10102;
unsigned int var_15 = 267290531U;
int zero = 0;
short var_18 = (short)26013;
signed char var_19 = (signed char)31;
unsigned long long int var_20 = 3559761287692663973ULL;
void init() {
}

void checksum() {
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
