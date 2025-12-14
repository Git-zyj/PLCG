#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3726530942155573438LL;
long long int var_6 = -8033731107519033135LL;
unsigned char var_7 = (unsigned char)166;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)97;
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
