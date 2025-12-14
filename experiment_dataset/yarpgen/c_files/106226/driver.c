#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-1034;
unsigned char var_4 = (unsigned char)190;
long long int var_6 = -6827141181050748985LL;
int zero = 0;
short var_12 = (short)-455;
_Bool var_13 = (_Bool)1;
int var_14 = -458422107;
long long int var_15 = -4352270947552507351LL;
int var_16 = -485152270;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
