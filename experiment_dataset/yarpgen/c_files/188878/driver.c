#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_6 = -2102796407;
unsigned char var_7 = (unsigned char)233;
int var_9 = -1655624070;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned short var_17 = (unsigned short)32721;
signed char var_18 = (signed char)85;
int zero = 0;
int var_20 = -414732946;
unsigned char var_21 = (unsigned char)228;
signed char var_22 = (signed char)-23;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
