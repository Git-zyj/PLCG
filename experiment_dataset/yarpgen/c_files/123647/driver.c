#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8396442336806502355LL;
unsigned short var_1 = (unsigned short)14892;
signed char var_3 = (signed char)-45;
_Bool var_4 = (_Bool)1;
int var_12 = -1720732074;
int zero = 0;
long long int var_14 = 9156671836908485667LL;
int var_15 = -2046098497;
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
