#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1497926815U;
int var_5 = -951572747;
unsigned char var_9 = (unsigned char)139;
long long int var_11 = -1487739822928638082LL;
short var_13 = (short)4318;
int zero = 0;
long long int var_18 = 1617466363174296284LL;
unsigned short var_19 = (unsigned short)63499;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
