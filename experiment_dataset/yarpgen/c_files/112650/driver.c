#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 468533242U;
unsigned long long int var_4 = 12557328604394832679ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-1571;
int var_8 = -1691035980;
short var_10 = (short)29073;
unsigned short var_11 = (unsigned short)40247;
int var_12 = -211936535;
unsigned short var_14 = (unsigned short)28194;
int zero = 0;
unsigned short var_15 = (unsigned short)25857;
long long int var_16 = -5236292626023324729LL;
unsigned short var_17 = (unsigned short)54567;
int var_18 = 231461803;
unsigned long long int var_19 = 17002781265526356803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
