#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10915767951686045073ULL;
unsigned long long int var_3 = 2266928167855649661ULL;
long long int var_5 = -313060346009354282LL;
short var_6 = (short)11041;
short var_8 = (short)30843;
unsigned int var_9 = 2713819249U;
long long int var_10 = -8091139218822503986LL;
int zero = 0;
short var_11 = (short)19662;
unsigned char var_12 = (unsigned char)30;
unsigned char var_13 = (unsigned char)152;
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
