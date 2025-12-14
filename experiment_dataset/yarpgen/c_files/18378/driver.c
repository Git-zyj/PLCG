#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15328;
unsigned long long int var_2 = 1214749472810794841ULL;
long long int var_4 = 7647458270613380548LL;
signed char var_7 = (signed char)-38;
short var_9 = (short)4612;
short var_13 = (short)28616;
unsigned short var_14 = (unsigned short)29038;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9473669031411442966ULL;
short var_18 = (short)-2047;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
