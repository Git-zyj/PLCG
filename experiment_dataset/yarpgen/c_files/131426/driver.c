#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 642399667886839563LL;
unsigned short var_3 = (unsigned short)10326;
unsigned short var_5 = (unsigned short)7624;
unsigned short var_7 = (unsigned short)30003;
unsigned long long int var_10 = 12387686334381488109ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)32619;
int var_12 = -1046454609;
unsigned long long int var_13 = 3235024995088681878ULL;
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
