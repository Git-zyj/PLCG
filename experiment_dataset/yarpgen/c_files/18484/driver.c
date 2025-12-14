#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4024517244U;
signed char var_3 = (signed char)-7;
long long int var_4 = -6884774779128660313LL;
short var_5 = (short)16100;
unsigned int var_7 = 3915086282U;
short var_8 = (short)-11931;
long long int var_10 = -5238588056267890363LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 195783275U;
unsigned int var_13 = 1457316874U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-28458;
int zero = 0;
long long int var_16 = 246361430248380970LL;
unsigned long long int var_17 = 906618544857059499ULL;
unsigned int var_18 = 2524571762U;
short var_19 = (short)-23283;
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
