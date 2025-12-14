#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12571921939230912883ULL;
unsigned short var_3 = (unsigned short)62364;
unsigned long long int var_5 = 2617491228601755733ULL;
unsigned char var_8 = (unsigned char)86;
_Bool var_12 = (_Bool)1;
unsigned long long int var_18 = 13134806310229900190ULL;
int zero = 0;
signed char var_19 = (signed char)106;
unsigned char var_20 = (unsigned char)63;
long long int var_21 = 7460016104602489244LL;
unsigned char var_22 = (unsigned char)81;
short var_23 = (short)21679;
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
