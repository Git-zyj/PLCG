#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 16184569980434964310ULL;
unsigned char var_13 = (unsigned char)204;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2578182629041519920ULL;
unsigned int var_19 = 209520520U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)48924;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
