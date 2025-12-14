#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5183530888539944673ULL;
int var_3 = -1659622827;
short var_4 = (short)-2718;
short var_7 = (short)-22261;
unsigned char var_8 = (unsigned char)199;
short var_9 = (short)-6640;
short var_11 = (short)23501;
int zero = 0;
unsigned int var_12 = 1972720758U;
_Bool var_13 = (_Bool)1;
int var_14 = 1186021063;
unsigned char var_15 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
