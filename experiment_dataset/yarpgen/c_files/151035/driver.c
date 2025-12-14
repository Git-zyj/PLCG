#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6384315458062349500LL;
_Bool var_3 = (_Bool)0;
int var_12 = 1340286971;
signed char var_13 = (signed char)90;
unsigned char var_17 = (unsigned char)237;
long long int var_18 = 2707876744776116156LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)13761;
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
