#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16001222649340215451ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -211672872;
int var_4 = 1467903657;
int var_5 = -785955795;
int var_6 = -611548256;
unsigned long long int var_7 = 5776907270222592984ULL;
unsigned int var_10 = 2508832857U;
int var_11 = -1503696795;
int var_17 = -365423312;
int zero = 0;
int var_18 = 1643277877;
int var_19 = 396793732;
unsigned long long int var_20 = 13276367847062659548ULL;
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
