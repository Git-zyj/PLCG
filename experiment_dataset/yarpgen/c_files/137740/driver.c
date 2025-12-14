#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3682132124204224050LL;
unsigned int var_4 = 3465645341U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)4201;
unsigned int var_10 = 1164314678U;
signed char var_17 = (signed char)-85;
int zero = 0;
unsigned long long int var_19 = 1017933921321373317ULL;
signed char var_20 = (signed char)-107;
unsigned int var_21 = 3276413438U;
signed char var_22 = (signed char)-65;
void init() {
}

void checksum() {
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
