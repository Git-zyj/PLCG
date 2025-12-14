#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9126728459409272414LL;
signed char var_3 = (signed char)-124;
long long int var_4 = -5204397642153905260LL;
int var_5 = 1915808230;
unsigned int var_6 = 2831909739U;
unsigned long long int var_7 = 11443210414792133486ULL;
short var_9 = (short)15912;
unsigned int var_10 = 4070604021U;
unsigned int var_13 = 4041036292U;
unsigned short var_14 = (unsigned short)25931;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4247783204879931552ULL;
int zero = 0;
long long int var_20 = -6301823737262819486LL;
short var_21 = (short)-13162;
unsigned short var_22 = (unsigned short)7782;
short var_23 = (short)-5066;
long long int var_24 = 3369847914543267106LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
