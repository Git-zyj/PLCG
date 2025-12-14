#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
long long int var_1 = 4777350004077230465LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)127;
unsigned long long int var_8 = 14634097031929210768ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)142;
_Bool var_11 = (_Bool)0;
int var_12 = -1711914780;
int zero = 0;
int var_14 = 2143872425;
unsigned char var_15 = (unsigned char)172;
void init() {
}

void checksum() {
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
