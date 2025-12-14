#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1411929344368828609ULL;
unsigned long long int var_7 = 12188166889658843836ULL;
unsigned long long int var_10 = 11374917116703321677ULL;
unsigned long long int var_11 = 2520824837294731134ULL;
unsigned long long int var_13 = 4690913019063342362ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)12775;
unsigned long long int var_17 = 6288742297260269181ULL;
unsigned long long int var_18 = 14128390376322975610ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
