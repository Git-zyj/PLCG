#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6609605406810229811LL;
unsigned long long int var_5 = 15304467768954760656ULL;
long long int var_7 = 2760503751528930405LL;
int zero = 0;
unsigned int var_11 = 1803146783U;
long long int var_12 = -4694843026181671285LL;
short var_13 = (short)23262;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
