#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
_Bool var_2 = (_Bool)0;
int var_3 = -2032075765;
unsigned long long int var_8 = 600412309563456748ULL;
unsigned int var_9 = 3182408023U;
_Bool var_10 = (_Bool)1;
short var_14 = (short)8221;
long long int var_15 = -1662390405631025587LL;
signed char var_17 = (signed char)109;
int zero = 0;
int var_18 = -132830425;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
