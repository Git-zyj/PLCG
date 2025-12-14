#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1046262432;
unsigned short var_4 = (unsigned short)25338;
long long int var_6 = 4201864148827960155LL;
int var_8 = 168155235;
short var_9 = (short)-1371;
int var_11 = -740120106;
int zero = 0;
unsigned long long int var_12 = 9864410138085827767ULL;
unsigned short var_13 = (unsigned short)23159;
signed char var_14 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
