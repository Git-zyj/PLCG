#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned char var_2 = (unsigned char)189;
unsigned char var_3 = (unsigned char)31;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)106;
unsigned short var_6 = (unsigned short)25283;
unsigned char var_8 = (unsigned char)147;
unsigned long long int var_9 = 2693049039008749300ULL;
signed char var_11 = (signed char)-28;
signed char var_12 = (signed char)-32;
int var_14 = -1048294518;
unsigned char var_15 = (unsigned char)3;
signed char var_17 = (signed char)-8;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)3;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
