#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6112;
long long int var_4 = -831572614699526892LL;
short var_6 = (short)14445;
unsigned long long int var_7 = 4960726585999397769ULL;
unsigned int var_8 = 411646213U;
int zero = 0;
short var_10 = (short)10658;
unsigned short var_11 = (unsigned short)18091;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
