#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3736915989U;
unsigned long long int var_3 = 10523471845409484433ULL;
_Bool var_7 = (_Bool)0;
long long int var_15 = -1662912903784374767LL;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
unsigned short var_21 = (unsigned short)28894;
unsigned int var_22 = 1404372458U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
