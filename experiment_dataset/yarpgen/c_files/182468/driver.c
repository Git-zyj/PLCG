#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16418922271869969307ULL;
unsigned long long int var_3 = 5129056454504077298ULL;
long long int var_5 = 2894447576332379661LL;
unsigned char var_10 = (unsigned char)207;
unsigned long long int var_12 = 14863023230737663230ULL;
int zero = 0;
long long int var_13 = -8538338641132895675LL;
unsigned int var_14 = 2589035958U;
unsigned long long int var_15 = 5046931898323633594ULL;
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
