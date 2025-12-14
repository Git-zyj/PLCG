#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned short var_4 = (unsigned short)16960;
unsigned long long int var_11 = 1257201678166519177ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 6651797018876544658ULL;
unsigned short var_14 = (unsigned short)7526;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
