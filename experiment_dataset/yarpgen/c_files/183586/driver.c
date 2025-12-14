#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1733939018;
long long int var_4 = 2671308567009365836LL;
unsigned int var_5 = 1335517571U;
unsigned short var_6 = (unsigned short)53498;
unsigned int var_8 = 1966130296U;
int zero = 0;
int var_12 = 1470977781;
unsigned short var_13 = (unsigned short)14126;
unsigned short var_14 = (unsigned short)6652;
unsigned long long int var_15 = 10165805278823647535ULL;
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
