#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18005146446945026809ULL;
unsigned short var_3 = (unsigned short)47337;
unsigned int var_4 = 1396761108U;
unsigned char var_5 = (unsigned char)2;
signed char var_6 = (signed char)-83;
unsigned int var_7 = 2369846864U;
unsigned int var_8 = 1628622906U;
signed char var_10 = (signed char)34;
int zero = 0;
short var_11 = (short)27806;
unsigned long long int var_12 = 6817146410164581759ULL;
int var_13 = -561474692;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
