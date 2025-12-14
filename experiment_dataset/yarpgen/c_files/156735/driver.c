#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1687967286025427898LL;
long long int var_2 = 219605547942254600LL;
signed char var_3 = (signed char)14;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 17641972222235841731ULL;
long long int var_15 = 3786517490245514273LL;
int zero = 0;
long long int var_16 = 6230798067591287357LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 63046487U;
void init() {
}

void checksum() {
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
