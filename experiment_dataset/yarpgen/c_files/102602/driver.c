#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
unsigned long long int var_4 = 4630686651029731427ULL;
unsigned int var_6 = 3802763947U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -7237949998094030496LL;
unsigned long long int var_12 = 7838182558734363307ULL;
void init() {
}

void checksum() {
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
