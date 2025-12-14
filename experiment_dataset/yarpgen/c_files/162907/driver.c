#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7758887971293316080LL;
int var_3 = 215884240;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 1691210672U;
int zero = 0;
unsigned long long int var_18 = 1173439922997238552ULL;
unsigned int var_19 = 2823242479U;
int var_20 = -2147025822;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
