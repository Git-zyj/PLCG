#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17170624586413057588ULL;
unsigned long long int var_1 = 14167340957827465233ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 16577391718107356960ULL;
int var_18 = 438491784;
int var_19 = 1160800553;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
