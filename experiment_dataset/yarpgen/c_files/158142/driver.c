#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 702052671U;
signed char var_1 = (signed char)31;
int var_3 = 1428776541;
short var_7 = (short)-27409;
long long int var_9 = -6940586454709284736LL;
signed char var_10 = (signed char)70;
unsigned long long int var_13 = 4399246210198057548ULL;
signed char var_17 = (signed char)-53;
int zero = 0;
short var_18 = (short)-15827;
int var_19 = 1316521689;
int var_20 = -592932702;
signed char var_21 = (signed char)20;
unsigned char var_22 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
