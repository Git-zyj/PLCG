#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27163;
long long int var_3 = -7273223857921009535LL;
unsigned long long int var_4 = 1076126307804241684ULL;
unsigned long long int var_8 = 12267851597114947321ULL;
short var_11 = (short)-24702;
long long int var_13 = -6623034014260907513LL;
int zero = 0;
unsigned int var_16 = 565570261U;
short var_17 = (short)25811;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
