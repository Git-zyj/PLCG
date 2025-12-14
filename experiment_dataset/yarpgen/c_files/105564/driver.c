#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 776103411937888579LL;
unsigned short var_1 = (unsigned short)30790;
int var_2 = -1043554849;
unsigned char var_6 = (unsigned char)84;
unsigned int var_7 = 3474395813U;
_Bool var_8 = (_Bool)1;
int var_9 = 565556993;
int var_11 = 1035315866;
unsigned int var_12 = 1042314151U;
unsigned short var_13 = (unsigned short)24473;
int zero = 0;
long long int var_14 = 5826050092346341150LL;
short var_15 = (short)16754;
short var_16 = (short)-19028;
unsigned char var_17 = (unsigned char)234;
long long int var_18 = 7467590947258614722LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
