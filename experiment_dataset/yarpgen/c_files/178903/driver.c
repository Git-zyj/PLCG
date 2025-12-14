#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 6156210U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_17 = 16358239477843514617ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)4152;
signed char var_19 = (signed char)-96;
long long int var_20 = -7691348724914269490LL;
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
