#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)58;
unsigned int var_2 = 1689571481U;
unsigned int var_5 = 2567916608U;
signed char var_8 = (signed char)-116;
_Bool var_9 = (_Bool)0;
unsigned short var_14 = (unsigned short)52413;
int zero = 0;
unsigned char var_17 = (unsigned char)253;
unsigned int var_18 = 2858670384U;
short var_19 = (short)-14449;
void init() {
}

void checksum() {
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
