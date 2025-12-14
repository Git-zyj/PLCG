#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11443775731487697366ULL;
int var_2 = 469817300;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13974718302635937283ULL;
unsigned long long int var_10 = 15869785291785216706ULL;
int var_11 = 1628082700;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -977286644;
int var_14 = 1936878237;
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
