#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51592;
unsigned short var_3 = (unsigned short)34216;
short var_4 = (short)3739;
long long int var_10 = -744330729001698865LL;
long long int var_13 = 7611540354510474478LL;
long long int var_16 = -3937956727319011421LL;
signed char var_17 = (signed char)-60;
int zero = 0;
unsigned long long int var_18 = 3619248175745015981ULL;
unsigned short var_19 = (unsigned short)31438;
void init() {
}

void checksum() {
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
