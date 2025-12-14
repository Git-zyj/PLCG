#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 696450129;
signed char var_8 = (signed char)-90;
short var_10 = (short)13190;
int zero = 0;
int var_17 = 2105226707;
unsigned char var_18 = (unsigned char)224;
int var_19 = -1866547229;
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
