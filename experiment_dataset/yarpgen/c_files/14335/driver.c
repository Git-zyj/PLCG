#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1719366250U;
long long int var_6 = 1993624734371086798LL;
unsigned char var_12 = (unsigned char)226;
int var_15 = -1242451110;
int var_19 = 1861134662;
int zero = 0;
unsigned int var_20 = 883641767U;
signed char var_21 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
