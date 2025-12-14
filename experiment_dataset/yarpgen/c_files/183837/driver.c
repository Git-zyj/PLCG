#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17677;
unsigned int var_4 = 604436601U;
unsigned int var_8 = 1116002587U;
int var_9 = 1874507162;
int var_11 = 556906553;
int zero = 0;
short var_12 = (short)5205;
unsigned int var_13 = 2165445956U;
int var_14 = 69075793;
long long int var_15 = -8891643326497244488LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
