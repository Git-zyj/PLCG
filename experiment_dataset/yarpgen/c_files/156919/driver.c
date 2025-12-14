#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 551644263990647005LL;
long long int var_5 = 8753857278718355856LL;
long long int var_7 = 2277218511109469283LL;
unsigned int var_10 = 1487074903U;
unsigned long long int var_11 = 4390794473584075898ULL;
int zero = 0;
unsigned int var_13 = 1608218462U;
unsigned short var_14 = (unsigned short)21037;
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
