#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2978650742U;
_Bool var_4 = (_Bool)0;
long long int var_6 = -2325139090163250697LL;
unsigned short var_10 = (unsigned short)34061;
unsigned long long int var_18 = 16126460517691208001ULL;
int zero = 0;
unsigned long long int var_20 = 8868856634019455825ULL;
signed char var_21 = (signed char)13;
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
