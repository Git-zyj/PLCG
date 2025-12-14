#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6645155548743711658LL;
long long int var_2 = 1369247586742625700LL;
unsigned short var_7 = (unsigned short)43249;
short var_8 = (short)-10272;
unsigned int var_10 = 1615654641U;
short var_11 = (short)-3608;
unsigned int var_17 = 2158146700U;
int zero = 0;
unsigned short var_18 = (unsigned short)17646;
short var_19 = (short)25732;
int var_20 = 662178942;
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
