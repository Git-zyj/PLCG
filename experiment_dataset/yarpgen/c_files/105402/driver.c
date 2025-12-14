#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2923;
long long int var_7 = 3529092978406093764LL;
unsigned long long int var_9 = 17655511018689993458ULL;
unsigned long long int var_11 = 14803532892938882254ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)21806;
unsigned short var_13 = (unsigned short)32441;
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
