#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 110041172;
signed char var_1 = (signed char)-17;
_Bool var_3 = (_Bool)0;
unsigned int var_10 = 3492166281U;
int var_12 = 783587743;
int zero = 0;
short var_16 = (short)25818;
unsigned short var_17 = (unsigned short)42025;
int var_18 = 631158815;
long long int var_19 = -1654321283112429670LL;
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
