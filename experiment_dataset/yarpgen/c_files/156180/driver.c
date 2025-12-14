#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4493579816851645795LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 3182116680344225299LL;
long long int var_4 = 6694982509488507846LL;
int var_8 = -1660983434;
long long int var_9 = 6136181468778463299LL;
int zero = 0;
unsigned char var_10 = (unsigned char)191;
long long int var_11 = -1939271389250955957LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
