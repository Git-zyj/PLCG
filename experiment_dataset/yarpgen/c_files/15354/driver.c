#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)127;
int var_3 = -1763340171;
short var_4 = (short)-24277;
signed char var_5 = (signed char)19;
unsigned short var_6 = (unsigned short)36835;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2453704987U;
int zero = 0;
unsigned short var_11 = (unsigned short)2045;
int var_12 = 1198322532;
short var_13 = (short)-6256;
unsigned long long int var_14 = 7008885789048197875ULL;
unsigned short var_15 = (unsigned short)4505;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
