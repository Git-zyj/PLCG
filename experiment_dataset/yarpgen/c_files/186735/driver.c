#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 14304574854726190722ULL;
unsigned long long int var_14 = 13423091077934753986ULL;
signed char var_15 = (signed char)104;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
signed char var_21 = (signed char)76;
unsigned char var_22 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
