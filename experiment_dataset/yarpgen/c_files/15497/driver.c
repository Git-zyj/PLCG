#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8830430254839408956LL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 1505209987U;
unsigned short var_11 = (unsigned short)41933;
short var_12 = (short)4162;
int var_14 = 315801718;
signed char var_15 = (signed char)-2;
unsigned int var_17 = 1075335302U;
int zero = 0;
long long int var_18 = -7758804145121005260LL;
unsigned long long int var_19 = 6626029396460283790ULL;
void init() {
}

void checksum() {
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
