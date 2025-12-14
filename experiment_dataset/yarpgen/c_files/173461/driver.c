#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned short var_1 = (unsigned short)21737;
unsigned long long int var_6 = 17056767399667350163ULL;
signed char var_7 = (signed char)30;
short var_8 = (short)11673;
short var_9 = (short)8053;
long long int var_11 = -7349919323687869278LL;
short var_13 = (short)20872;
int zero = 0;
int var_15 = 1339703436;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13481877504234070925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
