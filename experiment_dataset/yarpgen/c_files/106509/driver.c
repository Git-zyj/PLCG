#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11095;
short var_4 = (short)-12131;
unsigned int var_9 = 1901282574U;
short var_12 = (short)3597;
int zero = 0;
short var_17 = (short)-6368;
long long int var_18 = 690926921270080637LL;
short var_19 = (short)-24056;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
