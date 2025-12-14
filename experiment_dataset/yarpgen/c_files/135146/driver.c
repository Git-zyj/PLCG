#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1532718009;
unsigned int var_6 = 1282657331U;
unsigned long long int var_13 = 11505644283308936458ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)35547;
unsigned long long int var_18 = 16187460832303942969ULL;
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
