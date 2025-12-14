#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned short var_2 = (unsigned short)57015;
unsigned char var_4 = (unsigned char)214;
long long int var_5 = 448367030528067163LL;
short var_6 = (short)-5618;
signed char var_7 = (signed char)33;
short var_8 = (short)7628;
unsigned char var_17 = (unsigned char)136;
int zero = 0;
unsigned int var_18 = 2853630123U;
unsigned char var_19 = (unsigned char)3;
unsigned short var_20 = (unsigned short)20354;
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
