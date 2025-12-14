#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21942;
short var_4 = (short)-3873;
int var_7 = 1029774401;
short var_11 = (short)13244;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 767992074U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-8891;
int var_18 = 1537729612;
int zero = 0;
short var_19 = (short)-28528;
unsigned short var_20 = (unsigned short)54476;
int var_21 = 1942374179;
int var_22 = 807531168;
void init() {
}

void checksum() {
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
