#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29854;
int var_1 = 929032083;
short var_2 = (short)-4235;
unsigned long long int var_3 = 2145062197951165624ULL;
unsigned long long int var_4 = 17814480976785120888ULL;
int var_5 = -641450985;
int var_8 = 1157968774;
long long int var_9 = -484852350016129247LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1059259101;
short var_14 = (short)18886;
int var_15 = -575686142;
unsigned short var_17 = (unsigned short)56930;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
