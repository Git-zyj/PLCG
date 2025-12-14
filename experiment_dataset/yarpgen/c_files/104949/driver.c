#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6651768749998969778LL;
unsigned short var_9 = (unsigned short)65241;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5153137841628268662LL;
signed char var_19 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
