#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4038166164749688034LL;
int var_2 = -109815186;
unsigned char var_5 = (unsigned char)92;
unsigned short var_15 = (unsigned short)16339;
int zero = 0;
unsigned short var_18 = (unsigned short)44765;
_Bool var_19 = (_Bool)1;
short var_20 = (short)30547;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
