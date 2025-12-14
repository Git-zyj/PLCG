#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -429411001;
unsigned char var_8 = (unsigned char)180;
unsigned int var_9 = 17206254U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-24369;
unsigned long long int var_14 = 15053158871545299468ULL;
int var_15 = 397739080;
int zero = 0;
int var_16 = -1258116988;
unsigned char var_17 = (unsigned char)120;
signed char var_18 = (signed char)-96;
short var_19 = (short)7104;
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
