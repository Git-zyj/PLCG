#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)13971;
signed char var_6 = (signed char)21;
unsigned long long int var_8 = 14501248994585022839ULL;
long long int var_9 = 1795666324851021795LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -280846676999177549LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
