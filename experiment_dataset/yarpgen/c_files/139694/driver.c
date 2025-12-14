#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29075;
unsigned char var_4 = (unsigned char)244;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-4215;
int zero = 0;
unsigned int var_11 = 3483753058U;
long long int var_12 = 338176621412044985LL;
unsigned long long int var_13 = 2659662124195156571ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
