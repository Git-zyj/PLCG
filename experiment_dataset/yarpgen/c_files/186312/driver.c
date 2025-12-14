#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15973419968323671253ULL;
unsigned int var_5 = 230274534U;
unsigned long long int var_9 = 16207505935552692448ULL;
unsigned char var_10 = (unsigned char)126;
long long int var_12 = 5492404703498448263LL;
int zero = 0;
long long int var_19 = 3384570267266186618LL;
int var_20 = -1337667463;
void init() {
}

void checksum() {
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
