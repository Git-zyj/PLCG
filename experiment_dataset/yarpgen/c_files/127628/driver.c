#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7220507719672086951LL;
signed char var_5 = (signed char)-97;
signed char var_9 = (signed char)79;
long long int var_13 = -6736764037094862185LL;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
int var_18 = -1913918541;
unsigned int var_19 = 1996392254U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
