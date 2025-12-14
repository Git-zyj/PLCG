#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3563645233U;
unsigned int var_7 = 1519059099U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 10013047484432510231ULL;
unsigned short var_14 = (unsigned short)41024;
int zero = 0;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = 6103710358904224641LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
