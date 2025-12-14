#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8821506684577585763ULL;
short var_5 = (short)15854;
unsigned short var_9 = (unsigned short)40393;
short var_11 = (short)25101;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -702126707;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-2601;
unsigned int var_22 = 119470613U;
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
