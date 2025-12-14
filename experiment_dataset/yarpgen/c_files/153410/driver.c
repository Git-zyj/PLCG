#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28464;
signed char var_6 = (signed char)0;
unsigned short var_7 = (unsigned short)12988;
short var_8 = (short)-11007;
short var_16 = (short)28532;
int zero = 0;
signed char var_17 = (signed char)36;
long long int var_18 = 2425128923476153158LL;
unsigned char var_19 = (unsigned char)168;
unsigned long long int var_20 = 7857084704580536264ULL;
void init() {
}

void checksum() {
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
