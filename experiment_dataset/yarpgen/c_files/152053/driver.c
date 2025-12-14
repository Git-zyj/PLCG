#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
short var_2 = (short)-20858;
unsigned int var_3 = 2460000019U;
_Bool var_5 = (_Bool)1;
short var_8 = (short)759;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18244076625065182911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
