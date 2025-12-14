#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7462;
short var_3 = (short)9416;
unsigned char var_5 = (unsigned char)163;
long long int var_7 = 2020104698521698605LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-8400;
int zero = 0;
short var_13 = (short)11965;
unsigned long long int var_14 = 13464687268162297983ULL;
short var_15 = (short)-18710;
unsigned int var_16 = 1664582376U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
