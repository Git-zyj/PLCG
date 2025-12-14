#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1441419901U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)43;
unsigned int var_5 = 3736174496U;
long long int var_8 = 8056878979618166239LL;
unsigned short var_11 = (unsigned short)27387;
unsigned long long int var_14 = 17953616049253228179ULL;
unsigned int var_15 = 2942176748U;
int zero = 0;
unsigned int var_16 = 1143625148U;
unsigned short var_17 = (unsigned short)15028;
unsigned short var_18 = (unsigned short)60367;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12011818820815251298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
