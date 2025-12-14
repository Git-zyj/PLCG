#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3257134602U;
long long int var_4 = -1439500211442577742LL;
unsigned short var_5 = (unsigned short)6209;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = -385002228455068761LL;
unsigned long long int var_15 = 1714640018125381057ULL;
void init() {
}

void checksum() {
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
