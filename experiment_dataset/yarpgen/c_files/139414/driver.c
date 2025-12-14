#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-21;
short var_5 = (short)13630;
unsigned long long int var_8 = 8758180442117014404ULL;
short var_10 = (short)7939;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4180231452U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2813351313U;
unsigned char var_18 = (unsigned char)140;
unsigned int var_19 = 2554363391U;
unsigned int var_20 = 4027579523U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
