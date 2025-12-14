#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 235861291U;
long long int var_9 = -2503562999958965269LL;
unsigned short var_10 = (unsigned short)43103;
unsigned short var_11 = (unsigned short)36795;
int zero = 0;
unsigned short var_12 = (unsigned short)19702;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)17907;
int var_15 = 1531439349;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
