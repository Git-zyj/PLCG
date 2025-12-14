#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned int var_1 = 3690690531U;
unsigned int var_2 = 3406555199U;
unsigned int var_3 = 1586954347U;
unsigned int var_5 = 2059014048U;
unsigned int var_8 = 625118016U;
unsigned int var_11 = 2612481001U;
signed char var_12 = (signed char)-47;
int var_15 = -46767521;
int zero = 0;
unsigned char var_17 = (unsigned char)74;
signed char var_18 = (signed char)-119;
signed char var_19 = (signed char)102;
signed char var_20 = (signed char)59;
unsigned short var_21 = (unsigned short)4695;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
