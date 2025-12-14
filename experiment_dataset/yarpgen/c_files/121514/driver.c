#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1744;
long long int var_1 = -8281436582749431866LL;
long long int var_2 = 1427047807541437771LL;
int var_8 = -1164641827;
int zero = 0;
unsigned long long int var_12 = 12359403348615469971ULL;
long long int var_13 = 3129936340674078712LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
