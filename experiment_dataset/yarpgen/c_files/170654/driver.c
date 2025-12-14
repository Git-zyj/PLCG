#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)92;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 18293199360615341304ULL;
signed char var_8 = (signed char)-39;
int var_12 = 1914587840;
short var_13 = (short)13297;
unsigned short var_14 = (unsigned short)26731;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
unsigned int var_17 = 3442145017U;
short var_18 = (short)-29806;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
