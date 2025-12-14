#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18239975415739546458ULL;
unsigned long long int var_2 = 8453650882061678795ULL;
unsigned int var_3 = 1552062424U;
unsigned int var_5 = 1404058997U;
unsigned long long int var_10 = 2525259109973340803ULL;
unsigned int var_11 = 1128974823U;
int zero = 0;
unsigned int var_13 = 338817395U;
long long int var_14 = 2219925077656771969LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
