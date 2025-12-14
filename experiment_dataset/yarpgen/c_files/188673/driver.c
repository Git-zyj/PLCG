#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
long long int var_1 = 964748540198370934LL;
signed char var_2 = (signed char)-74;
unsigned int var_3 = 1494775550U;
unsigned int var_5 = 2671918260U;
long long int var_6 = -3122148691625768297LL;
signed char var_8 = (signed char)6;
_Bool var_9 = (_Bool)0;
long long int var_10 = -1790691198412448334LL;
short var_12 = (short)2254;
unsigned int var_14 = 2925326021U;
unsigned long long int var_15 = 7594137683535012063ULL;
unsigned short var_16 = (unsigned short)48071;
int zero = 0;
unsigned short var_17 = (unsigned short)33980;
signed char var_18 = (signed char)-24;
unsigned short var_19 = (unsigned short)22711;
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
