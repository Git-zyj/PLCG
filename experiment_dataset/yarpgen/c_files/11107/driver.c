#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)222;
unsigned char var_4 = (unsigned char)162;
unsigned long long int var_5 = 3731375310969371910ULL;
short var_7 = (short)-8092;
unsigned short var_8 = (unsigned short)35816;
unsigned long long int var_9 = 12474383021571512808ULL;
int zero = 0;
short var_12 = (short)2292;
long long int var_13 = -3730099322784063107LL;
signed char var_14 = (signed char)-35;
unsigned long long int var_15 = 3189949542900862040ULL;
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
