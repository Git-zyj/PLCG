#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 999264839;
unsigned int var_5 = 3470036927U;
unsigned int var_6 = 2392330167U;
int zero = 0;
unsigned int var_18 = 2297429948U;
long long int var_19 = 8390238746932889795LL;
unsigned short var_20 = (unsigned short)50563;
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
