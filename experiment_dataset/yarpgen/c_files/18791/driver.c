#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4327988662155997634LL;
unsigned short var_6 = (unsigned short)43422;
int var_9 = 1570365732;
unsigned int var_10 = 681523525U;
short var_13 = (short)-13590;
int zero = 0;
signed char var_15 = (signed char)106;
unsigned long long int var_16 = 10482682452027542961ULL;
short var_17 = (short)-26307;
short var_18 = (short)-393;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
