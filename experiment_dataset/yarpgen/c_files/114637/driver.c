#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4478;
unsigned short var_5 = (unsigned short)49525;
unsigned int var_6 = 3894445516U;
unsigned long long int var_7 = 5476060552446781427ULL;
unsigned short var_12 = (unsigned short)60767;
long long int var_15 = -6651683309208998485LL;
long long int var_17 = 5498853884169791843LL;
unsigned short var_18 = (unsigned short)10541;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)53797;
short var_22 = (short)21303;
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
