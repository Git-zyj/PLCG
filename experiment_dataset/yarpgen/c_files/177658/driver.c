#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14679901044802904251ULL;
int var_1 = 1540689008;
long long int var_10 = -1493938475193062729LL;
long long int var_11 = -7777585059540312550LL;
int zero = 0;
unsigned long long int var_12 = 6837053666673189657ULL;
unsigned short var_13 = (unsigned short)37596;
short var_14 = (short)-27060;
int var_15 = 1007216999;
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
