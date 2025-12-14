#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5404536465030430106LL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)21496;
int zero = 0;
unsigned int var_10 = 2287844759U;
unsigned char var_11 = (unsigned char)70;
unsigned long long int var_12 = 916981822474857625ULL;
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
