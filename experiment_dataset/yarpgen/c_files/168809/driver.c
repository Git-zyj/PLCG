#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
short var_8 = (short)-23300;
_Bool var_10 = (_Bool)1;
short var_11 = (short)3074;
long long int var_12 = -2297242946524134198LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-6824;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)22;
short var_21 = (short)-12696;
unsigned int var_22 = 416864552U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
