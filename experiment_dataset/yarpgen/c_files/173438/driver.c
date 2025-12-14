#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4567631639187221280ULL;
unsigned int var_2 = 1717679388U;
unsigned short var_5 = (unsigned short)13666;
unsigned short var_10 = (unsigned short)16195;
unsigned int var_11 = 3121274879U;
int zero = 0;
unsigned long long int var_16 = 3490133451800190630ULL;
unsigned int var_17 = 128060877U;
unsigned long long int var_18 = 10500926385077226376ULL;
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
