#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22162;
unsigned int var_5 = 1389094451U;
short var_8 = (short)18027;
unsigned int var_10 = 2168488715U;
int var_13 = 156594337;
long long int var_15 = -7345528418622526555LL;
int zero = 0;
short var_17 = (short)-16886;
int var_18 = 314563382;
long long int var_19 = 5042136137972597596LL;
unsigned char var_20 = (unsigned char)63;
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
