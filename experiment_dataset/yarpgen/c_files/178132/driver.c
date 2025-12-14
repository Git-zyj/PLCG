#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 62524899;
_Bool var_3 = (_Bool)1;
int var_6 = 2134823415;
signed char var_8 = (signed char)17;
_Bool var_10 = (_Bool)0;
short var_12 = (short)2912;
int zero = 0;
signed char var_17 = (signed char)-3;
short var_18 = (short)749;
unsigned char var_19 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
