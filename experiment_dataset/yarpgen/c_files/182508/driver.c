#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16758661644683847687ULL;
unsigned short var_13 = (unsigned short)12081;
unsigned int var_14 = 781185959U;
int zero = 0;
long long int var_20 = -1236097474978438547LL;
unsigned int var_21 = 812926203U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 4610864029189733454LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
