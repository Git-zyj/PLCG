#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1424;
signed char var_2 = (signed char)13;
unsigned short var_3 = (unsigned short)58355;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 610334667U;
long long int var_6 = 571732125890758534LL;
short var_9 = (short)-7752;
int zero = 0;
int var_11 = 1157704654;
unsigned short var_12 = (unsigned short)25943;
int var_13 = -1549067698;
void init() {
}

void checksum() {
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
