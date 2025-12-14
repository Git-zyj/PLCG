#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7400;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)79;
long long int var_8 = -4761872386423052618LL;
long long int var_9 = -7593801539098296816LL;
unsigned short var_10 = (unsigned short)14689;
unsigned long long int var_12 = 4779074984724988391ULL;
long long int var_13 = -6822628196351556568LL;
int var_15 = -2096428904;
int zero = 0;
signed char var_18 = (signed char)103;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 986152224344228068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
