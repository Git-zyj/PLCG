#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1137978519;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)34;
int zero = 0;
long long int var_17 = 6733299241844369457LL;
long long int var_18 = 7069292251029614206LL;
short var_19 = (short)17460;
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
