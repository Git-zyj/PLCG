#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2366013358284840810LL;
int var_6 = -272878591;
short var_8 = (short)-1382;
signed char var_12 = (signed char)-25;
int zero = 0;
unsigned short var_15 = (unsigned short)32602;
short var_16 = (short)-1585;
signed char var_17 = (signed char)-27;
long long int var_18 = -3887837772415162626LL;
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
