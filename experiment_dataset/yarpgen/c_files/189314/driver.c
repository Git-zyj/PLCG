#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9428;
long long int var_3 = 7367611000918213222LL;
unsigned char var_4 = (unsigned char)99;
int var_7 = 176620871;
unsigned long long int var_8 = 9926367998512567748ULL;
unsigned int var_9 = 2882187097U;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -525528694884527168LL;
short var_12 = (short)-9023;
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
