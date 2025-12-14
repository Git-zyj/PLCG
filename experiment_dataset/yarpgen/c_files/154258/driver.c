#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1589070783U;
long long int var_8 = -2640926129240626975LL;
unsigned short var_9 = (unsigned short)49935;
int zero = 0;
long long int var_19 = -7906721351471748744LL;
long long int var_20 = 6889889528980200917LL;
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
