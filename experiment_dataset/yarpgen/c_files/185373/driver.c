#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4410357725155356937LL;
unsigned long long int var_1 = 2014249387853924846ULL;
short var_3 = (short)173;
unsigned long long int var_7 = 12337417699014569261ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)61583;
unsigned long long int var_10 = 16379861287568146944ULL;
short var_11 = (short)-6703;
int var_14 = 816927248;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)41540;
int zero = 0;
short var_20 = (short)-8923;
short var_21 = (short)832;
unsigned short var_22 = (unsigned short)3987;
short var_23 = (short)20602;
unsigned long long int var_24 = 244509789351938353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
