#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24792;
int var_1 = 1700915417;
int var_3 = -865187032;
int var_7 = -429195684;
unsigned long long int var_9 = 5109653830738608286ULL;
short var_13 = (short)-24566;
short var_15 = (short)-7213;
short var_16 = (short)-5471;
unsigned char var_17 = (unsigned char)206;
int zero = 0;
unsigned long long int var_19 = 7357149734586031752ULL;
unsigned short var_20 = (unsigned short)58902;
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
