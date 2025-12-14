#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -99746205;
signed char var_8 = (signed char)-123;
_Bool var_12 = (_Bool)0;
long long int var_15 = 8753515828427868412LL;
unsigned short var_17 = (unsigned short)13994;
int zero = 0;
long long int var_20 = 2474805284001611507LL;
unsigned short var_21 = (unsigned short)41855;
void init() {
}

void checksum() {
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
