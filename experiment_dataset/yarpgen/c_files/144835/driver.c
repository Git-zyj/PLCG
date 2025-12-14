#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)60194;
unsigned char var_10 = (unsigned char)70;
unsigned long long int var_12 = 11294675617025497248ULL;
int zero = 0;
short var_16 = (short)-14381;
long long int var_17 = -3445737085950349314LL;
unsigned short var_18 = (unsigned short)53944;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
