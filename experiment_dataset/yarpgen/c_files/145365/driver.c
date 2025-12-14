#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)13274;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)58;
int var_8 = 1367466051;
short var_9 = (short)20147;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)193;
long long int var_12 = -6584173730675786801LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-75;
unsigned char var_17 = (unsigned char)206;
int var_18 = -782960021;
unsigned long long int var_19 = 16977124444476560341ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
