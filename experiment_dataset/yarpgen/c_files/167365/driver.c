#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned long long int var_4 = 226167388163589317ULL;
long long int var_11 = -390443350232253561LL;
int zero = 0;
signed char var_13 = (signed char)-32;
short var_14 = (short)10566;
long long int var_15 = -6872967671319477232LL;
int var_16 = 34882929;
int var_17 = -1699524754;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
