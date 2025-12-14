#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2112;
signed char var_6 = (signed char)-39;
signed char var_7 = (signed char)54;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
long long int var_11 = -8100159755224826262LL;
unsigned long long int var_12 = 5820336544017809346ULL;
int var_13 = -366136598;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
