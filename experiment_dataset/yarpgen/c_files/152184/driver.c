#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17570;
unsigned int var_1 = 2014546682U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)39330;
int zero = 0;
signed char var_20 = (signed char)-82;
short var_21 = (short)21837;
unsigned short var_22 = (unsigned short)57473;
unsigned long long int var_23 = 13065295910374733508ULL;
unsigned char var_24 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
