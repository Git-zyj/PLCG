#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -218717625;
unsigned long long int var_4 = 2404735548310820534ULL;
int var_5 = 671436784;
unsigned char var_7 = (unsigned char)92;
int zero = 0;
unsigned char var_17 = (unsigned char)39;
short var_18 = (short)-30570;
unsigned long long int var_19 = 7397392276910895248ULL;
unsigned char var_20 = (unsigned char)206;
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
