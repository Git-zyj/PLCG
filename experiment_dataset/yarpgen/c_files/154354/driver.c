#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4110863882U;
_Bool var_2 = (_Bool)0;
int var_5 = -342288977;
int var_6 = 152486420;
short var_12 = (short)-22756;
unsigned int var_13 = 3854155679U;
int var_15 = -1355455173;
unsigned int var_16 = 3234908214U;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)109;
short var_21 = (short)-17540;
void init() {
}

void checksum() {
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
