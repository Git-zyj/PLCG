#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4448062807559108501LL;
unsigned char var_2 = (unsigned char)159;
_Bool var_7 = (_Bool)0;
long long int var_12 = 1053010266477896602LL;
int zero = 0;
long long int var_13 = 3068046907328225110LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
