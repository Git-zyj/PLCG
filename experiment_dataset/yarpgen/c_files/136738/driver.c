#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 273286352651211525ULL;
unsigned short var_7 = (unsigned short)62991;
unsigned short var_8 = (unsigned short)60486;
long long int var_10 = -4941801731593158998LL;
int var_11 = -1143153699;
unsigned short var_12 = (unsigned short)25167;
_Bool var_13 = (_Bool)0;
unsigned int var_18 = 3019357473U;
int zero = 0;
unsigned int var_20 = 719735611U;
unsigned short var_21 = (unsigned short)60252;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
