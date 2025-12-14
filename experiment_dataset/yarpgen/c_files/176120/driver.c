#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-39;
unsigned long long int var_8 = 4489072127567238596ULL;
unsigned short var_9 = (unsigned short)44443;
short var_12 = (short)22621;
unsigned short var_13 = (unsigned short)2676;
short var_14 = (short)20759;
int zero = 0;
unsigned long long int var_16 = 10267626090594195637ULL;
short var_17 = (short)-2486;
int var_18 = -813132294;
unsigned short var_19 = (unsigned short)42916;
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
