#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
long long int var_3 = -3875834649201276389LL;
signed char var_6 = (signed char)68;
unsigned short var_11 = (unsigned short)61568;
unsigned int var_15 = 3655416657U;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
unsigned long long int var_18 = 4863684084672277156ULL;
unsigned long long int var_19 = 12105578058830715813ULL;
unsigned short var_20 = (unsigned short)13206;
unsigned short var_21 = (unsigned short)55319;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
