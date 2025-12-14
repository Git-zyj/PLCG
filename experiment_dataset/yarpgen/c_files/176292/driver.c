#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-99;
short var_9 = (short)-5342;
unsigned int var_10 = 102724842U;
unsigned long long int var_13 = 10269819927984464518ULL;
int zero = 0;
short var_19 = (short)16765;
signed char var_20 = (signed char)57;
signed char var_21 = (signed char)-121;
unsigned long long int var_22 = 14113307507891429404ULL;
signed char var_23 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
