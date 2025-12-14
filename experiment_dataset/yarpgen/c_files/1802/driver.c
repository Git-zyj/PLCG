#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 267245591;
unsigned int var_3 = 2974327637U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 18231018984395888850ULL;
unsigned int var_15 = 2044894063U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3447098686667187055LL;
void init() {
}

void checksum() {
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
