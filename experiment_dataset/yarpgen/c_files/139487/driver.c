#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 542816211U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)70;
short var_8 = (short)21299;
signed char var_9 = (signed char)7;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)9732;
int zero = 0;
signed char var_14 = (signed char)-31;
signed char var_15 = (signed char)41;
unsigned int var_16 = 2039589661U;
signed char var_17 = (signed char)86;
unsigned int var_18 = 4094645433U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
