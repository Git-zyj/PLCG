#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18159;
unsigned int var_4 = 3908466220U;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7343654952741570163LL;
int var_13 = 1775147747;
unsigned short var_16 = (unsigned short)54185;
int zero = 0;
signed char var_20 = (signed char)69;
long long int var_21 = 1043180372806499228LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
