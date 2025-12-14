#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16954787498657331732ULL;
unsigned long long int var_7 = 13065591577821604335ULL;
long long int var_14 = -283245282518663351LL;
int zero = 0;
long long int var_15 = 8403162343292793745LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7772268634703671539LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
