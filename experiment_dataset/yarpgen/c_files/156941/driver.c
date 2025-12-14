#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8874377770776779446LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)28;
long long int var_7 = 5276641935753749901LL;
int zero = 0;
unsigned short var_10 = (unsigned short)25535;
int var_11 = -1953378467;
unsigned char var_12 = (unsigned char)223;
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
