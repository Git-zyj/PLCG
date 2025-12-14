#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7475655231370051668LL;
long long int var_2 = -6711284624189418833LL;
unsigned char var_5 = (unsigned char)97;
unsigned int var_6 = 2390678460U;
int var_7 = -132058460;
unsigned short var_10 = (unsigned short)16871;
long long int var_11 = -3132524036055469356LL;
int zero = 0;
unsigned long long int var_12 = 16014209368956082018ULL;
int var_13 = 560825984;
unsigned short var_14 = (unsigned short)45391;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
