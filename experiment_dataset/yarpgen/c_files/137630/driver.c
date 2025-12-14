#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29060;
unsigned long long int var_1 = 16909587936671579173ULL;
unsigned short var_3 = (unsigned short)63723;
short var_5 = (short)-27752;
int var_8 = -876678160;
unsigned int var_9 = 3338821663U;
int zero = 0;
short var_10 = (short)-7563;
short var_11 = (short)11831;
int var_12 = 205737391;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
