#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14104;
unsigned char var_2 = (unsigned char)201;
int var_4 = 611088833;
long long int var_9 = -8554747061745934256LL;
unsigned long long int var_10 = 1510223782998673418ULL;
short var_17 = (short)25882;
int zero = 0;
unsigned long long int var_19 = 7606445191194502388ULL;
unsigned long long int var_20 = 12191856724084209979ULL;
void init() {
}

void checksum() {
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
