#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11872;
unsigned char var_4 = (unsigned char)31;
long long int var_5 = 7403856301671296882LL;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)212;
int var_9 = -734376081;
long long int var_12 = 5368294017779859493LL;
long long int var_16 = -6786675305621665057LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)232;
unsigned short var_19 = (unsigned short)36918;
unsigned long long int var_20 = 271798088652627458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
