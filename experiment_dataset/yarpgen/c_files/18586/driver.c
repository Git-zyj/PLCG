#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2055732209;
int var_9 = -2068341275;
signed char var_10 = (signed char)107;
unsigned short var_11 = (unsigned short)18873;
long long int var_12 = -6001611773210661369LL;
long long int var_15 = 3815934793224450981LL;
int zero = 0;
int var_18 = -528381220;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
