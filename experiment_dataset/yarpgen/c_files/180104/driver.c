#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19236;
long long int var_3 = 1159805461308469815LL;
short var_10 = (short)12433;
unsigned char var_12 = (unsigned char)16;
signed char var_16 = (signed char)99;
int zero = 0;
unsigned int var_18 = 2345405755U;
unsigned int var_19 = 1267434492U;
unsigned char var_20 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
