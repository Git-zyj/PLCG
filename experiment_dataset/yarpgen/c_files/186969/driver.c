#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2852137411391455070LL;
unsigned int var_2 = 2372970689U;
unsigned long long int var_4 = 17676399594131698405ULL;
signed char var_5 = (signed char)98;
short var_6 = (short)31396;
unsigned short var_7 = (unsigned short)31524;
unsigned char var_9 = (unsigned char)35;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)19350;
unsigned char var_14 = (unsigned char)15;
long long int var_15 = -5929885817182945041LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
