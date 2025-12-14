#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_1 = (unsigned short)10639;
unsigned short var_3 = (unsigned short)11796;
long long int var_4 = -3516037609120764973LL;
short var_6 = (short)-86;
unsigned int var_8 = 772840557U;
short var_9 = (short)12613;
unsigned short var_10 = (unsigned short)55212;
long long int var_11 = 3888403652071136799LL;
unsigned short var_13 = (unsigned short)24802;
short var_14 = (short)-20718;
int zero = 0;
unsigned int var_16 = 2028341492U;
unsigned short var_17 = (unsigned short)16944;
short var_18 = (short)12101;
unsigned short var_19 = (unsigned short)14346;
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
