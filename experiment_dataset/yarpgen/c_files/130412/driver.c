#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25067;
short var_1 = (short)-15257;
unsigned long long int var_2 = 14196697560606012395ULL;
unsigned int var_3 = 2059506279U;
signed char var_4 = (signed char)-11;
short var_5 = (short)29245;
signed char var_7 = (signed char)124;
unsigned int var_8 = 2450496324U;
long long int var_9 = -640786646788586805LL;
int zero = 0;
signed char var_10 = (signed char)80;
unsigned int var_11 = 3216514718U;
unsigned short var_12 = (unsigned short)23110;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
