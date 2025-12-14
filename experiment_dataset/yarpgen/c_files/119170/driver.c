#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49567;
int var_1 = 866278765;
unsigned char var_2 = (unsigned char)146;
int var_4 = -683635767;
unsigned long long int var_5 = 4931338740537177183ULL;
short var_6 = (short)-14103;
_Bool var_8 = (_Bool)1;
int var_9 = -1147469141;
int zero = 0;
unsigned char var_10 = (unsigned char)241;
signed char var_11 = (signed char)109;
unsigned short var_12 = (unsigned short)30506;
unsigned int var_13 = 344227861U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
