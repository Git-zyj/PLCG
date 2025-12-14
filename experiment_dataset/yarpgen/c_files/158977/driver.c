#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)126;
unsigned long long int var_8 = 7842705927383151565ULL;
unsigned long long int var_10 = 4321638313824158746ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 15256926031393880248ULL;
long long int var_17 = 5570829884558651588LL;
unsigned char var_18 = (unsigned char)216;
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
