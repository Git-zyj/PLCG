#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3778560624357664722LL;
unsigned short var_1 = (unsigned short)62268;
short var_2 = (short)-7586;
unsigned long long int var_4 = 2454017656926731801ULL;
int var_5 = -868256426;
unsigned long long int var_6 = 14946636770628995235ULL;
unsigned long long int var_7 = 15286976751015904015ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-10;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16635775047271665168ULL;
int zero = 0;
unsigned int var_13 = 36397947U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-16883;
long long int var_16 = 848640999308913418LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
