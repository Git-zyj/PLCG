#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2795774329U;
unsigned int var_9 = 803735900U;
unsigned short var_11 = (unsigned short)3682;
short var_14 = (short)-7633;
int zero = 0;
signed char var_16 = (signed char)58;
signed char var_17 = (signed char)-90;
unsigned int var_18 = 3772964212U;
unsigned int var_19 = 482106240U;
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
