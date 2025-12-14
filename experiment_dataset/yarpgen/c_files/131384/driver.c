#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)102;
unsigned short var_6 = (unsigned short)2252;
unsigned int var_11 = 2713746828U;
unsigned char var_12 = (unsigned char)18;
int zero = 0;
unsigned long long int var_19 = 119902411718478301ULL;
long long int var_20 = -7970795288556315557LL;
unsigned long long int var_21 = 335632932925671571ULL;
long long int var_22 = -5288836159370945299LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
