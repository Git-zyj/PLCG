#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5685658282588791570ULL;
long long int var_1 = -7555994861724219563LL;
unsigned long long int var_2 = 11048487855335123924ULL;
unsigned short var_3 = (unsigned short)51391;
int var_4 = 437863392;
unsigned char var_5 = (unsigned char)70;
short var_7 = (short)12422;
short var_8 = (short)16017;
int var_10 = -47171394;
int zero = 0;
int var_11 = 1555068388;
signed char var_12 = (signed char)112;
unsigned short var_13 = (unsigned short)19153;
unsigned long long int var_14 = 11818609655223595646ULL;
signed char var_15 = (signed char)-120;
signed char var_16 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
