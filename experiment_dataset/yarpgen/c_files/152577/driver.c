#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53226;
int var_3 = -1747748638;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 16033277418988909928ULL;
unsigned short var_12 = (unsigned short)23031;
unsigned short var_17 = (unsigned short)29008;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)9345;
_Bool var_21 = (_Bool)1;
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
