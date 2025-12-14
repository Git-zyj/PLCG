#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 889243013U;
unsigned int var_2 = 2641597423U;
unsigned short var_3 = (unsigned short)30206;
signed char var_9 = (signed char)-120;
int var_10 = 1220330882;
int zero = 0;
short var_13 = (short)3130;
unsigned char var_14 = (unsigned char)191;
unsigned char var_15 = (unsigned char)174;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = 2313466222150704373LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
