#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
long long int var_3 = -3896112030461259263LL;
signed char var_4 = (signed char)126;
short var_6 = (short)23802;
unsigned long long int var_7 = 4856717389952358520ULL;
long long int var_10 = -630525347270952147LL;
unsigned char var_13 = (unsigned char)83;
unsigned int var_14 = 1403793894U;
unsigned short var_15 = (unsigned short)49321;
int var_16 = 1594535970;
unsigned char var_17 = (unsigned char)83;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1396733498;
int var_20 = -304486449;
short var_21 = (short)-10674;
_Bool var_22 = (_Bool)0;
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
