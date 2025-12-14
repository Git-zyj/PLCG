#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7896180189111185379ULL;
long long int var_1 = -2758726630821943901LL;
unsigned char var_6 = (unsigned char)236;
short var_12 = (short)20310;
int var_13 = 508796585;
int var_14 = -123845951;
short var_15 = (short)31319;
long long int var_16 = -5930774577832153764LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1415242412U;
unsigned char var_20 = (unsigned char)89;
short var_21 = (short)4948;
void init() {
}

void checksum() {
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
