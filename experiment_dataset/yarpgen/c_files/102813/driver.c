#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12192;
unsigned short var_2 = (unsigned short)6329;
unsigned int var_7 = 1777039969U;
int var_11 = -607394877;
unsigned int var_14 = 1496656095U;
unsigned char var_15 = (unsigned char)91;
int zero = 0;
int var_17 = 952180701;
unsigned long long int var_18 = 3784209510816402265ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)39;
long long int var_21 = 2168025077441929571LL;
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
