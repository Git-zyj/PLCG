#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)36019;
signed char var_8 = (signed char)-52;
unsigned long long int var_10 = 789917572061477766ULL;
int zero = 0;
int var_11 = 437526852;
long long int var_12 = 4068936003853437940LL;
int var_13 = -1933364458;
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
