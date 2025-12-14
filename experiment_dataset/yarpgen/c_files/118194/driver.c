#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1440419117U;
unsigned int var_3 = 3433035623U;
unsigned short var_8 = (unsigned short)12760;
long long int var_9 = -7521362277703961291LL;
unsigned long long int var_10 = 7717698178668104612ULL;
unsigned long long int var_16 = 14727716859032141942ULL;
int zero = 0;
unsigned int var_19 = 2043384651U;
int var_20 = 2117246626;
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
