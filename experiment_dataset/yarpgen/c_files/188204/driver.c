#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1031;
short var_9 = (short)-19382;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)154;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 4293719864U;
unsigned short var_19 = (unsigned short)51621;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
