#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)11018;
int var_5 = 440484218;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)22375;
signed char var_10 = (signed char)-22;
long long int var_11 = 4461219053807573567LL;
signed char var_12 = (signed char)-50;
int zero = 0;
signed char var_14 = (signed char)-107;
long long int var_15 = 1665065401591938921LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
