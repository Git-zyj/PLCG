#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5887253188689990129LL;
int var_1 = -1311727474;
signed char var_2 = (signed char)23;
int var_4 = -1571453997;
long long int var_5 = 3476604498414870902LL;
signed char var_8 = (signed char)-21;
unsigned int var_11 = 2071999508U;
int zero = 0;
signed char var_14 = (signed char)-79;
signed char var_15 = (signed char)82;
short var_16 = (short)14625;
short var_17 = (short)11152;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
