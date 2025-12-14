#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 707280412974857472ULL;
unsigned char var_3 = (unsigned char)93;
_Bool var_4 = (_Bool)0;
short var_5 = (short)27461;
long long int var_8 = 912199353594722232LL;
unsigned long long int var_9 = 1589276790844872061ULL;
int zero = 0;
short var_10 = (short)22736;
unsigned long long int var_11 = 4925460889254761385ULL;
unsigned long long int var_12 = 13162418690274760200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
