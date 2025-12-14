#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
int var_6 = -381830203;
_Bool var_7 = (_Bool)0;
short var_9 = (short)19816;
int var_11 = 1421090080;
int zero = 0;
int var_15 = 1763855937;
unsigned int var_16 = 3855865433U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
