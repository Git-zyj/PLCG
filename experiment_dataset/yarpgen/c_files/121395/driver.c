#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33765;
unsigned long long int var_4 = 9621107161250017552ULL;
unsigned long long int var_9 = 1849580633206615231ULL;
unsigned long long int var_13 = 4666666498708919037ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)47152;
unsigned long long int var_15 = 11551215380765677442ULL;
unsigned short var_16 = (unsigned short)36166;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
