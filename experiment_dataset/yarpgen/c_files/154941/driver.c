#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1669848783742519093LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)105;
unsigned long long int var_14 = 12293925524493706062ULL;
unsigned int var_15 = 1567207101U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
