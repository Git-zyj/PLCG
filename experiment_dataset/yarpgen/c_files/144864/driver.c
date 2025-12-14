#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19100;
unsigned short var_2 = (unsigned short)18460;
unsigned short var_3 = (unsigned short)10432;
long long int var_6 = 2122045712285883251LL;
unsigned long long int var_8 = 4714606816374115354ULL;
unsigned long long int var_10 = 18406638747666283121ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2718329366U;
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
