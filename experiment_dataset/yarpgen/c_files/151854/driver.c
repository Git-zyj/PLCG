#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)-27596;
short var_7 = (short)4550;
short var_8 = (short)30813;
int zero = 0;
long long int var_11 = -827131151207965724LL;
unsigned short var_12 = (unsigned short)44093;
unsigned long long int var_13 = 14423895691698977187ULL;
long long int var_14 = -7754911489122880048LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
