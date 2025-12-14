#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned short var_2 = (unsigned short)10869;
short var_4 = (short)28239;
signed char var_5 = (signed char)72;
_Bool var_6 = (_Bool)0;
int var_7 = -501478611;
signed char var_8 = (signed char)9;
unsigned long long int var_9 = 6757863692954549733ULL;
unsigned char var_10 = (unsigned char)200;
short var_14 = (short)-16758;
unsigned long long int var_16 = 9889357249801432941ULL;
unsigned short var_17 = (unsigned short)4041;
int zero = 0;
unsigned long long int var_18 = 2635764806401768304ULL;
unsigned char var_19 = (unsigned char)94;
unsigned int var_20 = 1342329951U;
unsigned short var_21 = (unsigned short)42828;
signed char var_22 = (signed char)-88;
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
