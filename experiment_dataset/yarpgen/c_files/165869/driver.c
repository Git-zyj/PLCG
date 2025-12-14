#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)42482;
unsigned short var_2 = (unsigned short)37479;
int var_6 = 1630100658;
unsigned char var_7 = (unsigned char)46;
unsigned long long int var_8 = 10635910232926912852ULL;
unsigned char var_9 = (unsigned char)156;
signed char var_10 = (signed char)(-127 - 1);
int var_11 = 1085604875;
long long int var_12 = 1954465519549251414LL;
unsigned short var_14 = (unsigned short)39377;
signed char var_15 = (signed char)-11;
unsigned char var_16 = (unsigned char)135;
int zero = 0;
int var_17 = 1239531926;
long long int var_18 = -2291376368075691257LL;
signed char var_19 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
