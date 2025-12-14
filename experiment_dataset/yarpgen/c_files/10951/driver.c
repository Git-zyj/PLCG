#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 529461557;
unsigned int var_3 = 2813439141U;
long long int var_7 = 6958986458303581924LL;
int var_9 = 1760091818;
long long int var_11 = 6653164164455208345LL;
long long int var_14 = -563864626551108402LL;
int zero = 0;
signed char var_18 = (signed char)43;
short var_19 = (short)4801;
unsigned long long int var_20 = 12693767832453338742ULL;
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
