#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)44413;
short var_7 = (short)7198;
unsigned short var_11 = (unsigned short)26479;
int zero = 0;
short var_12 = (short)3378;
unsigned short var_13 = (unsigned short)57680;
unsigned short var_14 = (unsigned short)34493;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
