#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11437;
unsigned long long int var_2 = 5001533830690117216ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 101280784U;
signed char var_7 = (signed char)-101;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)35726;
unsigned int var_11 = 1769069059U;
short var_13 = (short)26593;
unsigned int var_15 = 1415689946U;
unsigned long long int var_16 = 5615937667457332428ULL;
unsigned int var_17 = 1934541132U;
short var_18 = (short)18045;
int zero = 0;
unsigned short var_19 = (unsigned short)58537;
int var_20 = -705960872;
void init() {
}

void checksum() {
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
