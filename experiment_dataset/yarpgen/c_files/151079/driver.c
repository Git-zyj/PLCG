#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 911517992;
long long int var_1 = -7831804953234725895LL;
unsigned int var_2 = 346911010U;
unsigned long long int var_7 = 10750402626580032308ULL;
unsigned char var_9 = (unsigned char)228;
int zero = 0;
short var_12 = (short)2641;
unsigned int var_13 = 1241955297U;
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
