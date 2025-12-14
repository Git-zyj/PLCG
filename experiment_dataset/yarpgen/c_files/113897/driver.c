#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 691270288U;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -6011188838241281425LL;
unsigned long long int var_11 = 3546183065101190719ULL;
unsigned short var_12 = (unsigned short)13550;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
