#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3035;
unsigned int var_3 = 1692752433U;
unsigned int var_7 = 2937986998U;
unsigned int var_9 = 2055395523U;
long long int var_10 = 3377183665899376102LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3027480517986094988ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
