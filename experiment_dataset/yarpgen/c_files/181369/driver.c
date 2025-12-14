#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11953;
int var_1 = -1912213126;
long long int var_2 = 305316301245573970LL;
unsigned char var_3 = (unsigned char)38;
int var_4 = 597033725;
_Bool var_8 = (_Bool)0;
short var_10 = (short)11657;
unsigned short var_11 = (unsigned short)30159;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)61441;
int zero = 0;
long long int var_17 = -366603099786517710LL;
unsigned short var_18 = (unsigned short)20873;
short var_19 = (short)-14248;
unsigned short var_20 = (unsigned short)24691;
short var_21 = (short)-4845;
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
