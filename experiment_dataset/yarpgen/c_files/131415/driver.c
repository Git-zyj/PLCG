#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1744205245;
int var_2 = -1149156138;
int var_4 = -677816191;
int var_9 = -1427686994;
int var_15 = -888867169;
int zero = 0;
long long int var_17 = -5024925799646299752LL;
short var_18 = (short)5550;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
