#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)203;
_Bool var_6 = (_Bool)1;
int var_7 = 1282826436;
unsigned int var_8 = 1042518973U;
unsigned char var_9 = (unsigned char)243;
_Bool var_10 = (_Bool)0;
int var_11 = -1576857128;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3235437668U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
