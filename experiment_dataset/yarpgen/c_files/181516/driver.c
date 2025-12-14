#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1041924019;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3654486427671456283ULL;
long long int var_12 = -8700244974649149293LL;
unsigned char var_14 = (unsigned char)127;
int zero = 0;
unsigned long long int var_15 = 2247350200130245424ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2798100976U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
