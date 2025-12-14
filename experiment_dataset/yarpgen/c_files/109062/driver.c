#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2480099484457434034LL;
long long int var_2 = -6308236294396919009LL;
int var_4 = 1927601349;
int var_5 = 1510002728;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_10 = 83275147758606564LL;
_Bool var_11 = (_Bool)0;
int var_12 = 1202689287;
unsigned short var_13 = (unsigned short)19449;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
