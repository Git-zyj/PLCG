#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7317977158936882073LL;
short var_3 = (short)12086;
signed char var_8 = (signed char)-124;
long long int var_10 = -7450996423531791339LL;
unsigned int var_12 = 851990425U;
signed char var_13 = (signed char)-123;
signed char var_14 = (signed char)-10;
short var_15 = (short)11807;
int zero = 0;
unsigned short var_16 = (unsigned short)63057;
int var_17 = 926059936;
short var_18 = (short)-17166;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
