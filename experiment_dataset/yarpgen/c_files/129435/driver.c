#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
long long int var_1 = 4091396744699591720LL;
unsigned int var_3 = 2300722064U;
unsigned int var_6 = 960054216U;
unsigned short var_7 = (unsigned short)12003;
unsigned int var_9 = 686980205U;
long long int var_12 = -7867250946722300498LL;
int zero = 0;
int var_14 = 892541275;
unsigned long long int var_15 = 5543151194519229645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
