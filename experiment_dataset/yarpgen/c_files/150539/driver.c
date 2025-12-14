#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45541;
long long int var_6 = 8789005610370407222LL;
unsigned short var_7 = (unsigned short)65336;
short var_8 = (short)-29202;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)4;
unsigned short var_12 = (unsigned short)52300;
unsigned long long int var_14 = 3884324270940112424ULL;
signed char var_16 = (signed char)-84;
short var_17 = (short)16702;
int zero = 0;
unsigned long long int var_18 = 17785682756615009517ULL;
short var_19 = (short)26407;
int var_20 = 2077549874;
short var_21 = (short)27257;
void init() {
}

void checksum() {
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
