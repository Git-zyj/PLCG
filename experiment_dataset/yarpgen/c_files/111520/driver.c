#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6509;
long long int var_1 = 4316635042220501695LL;
unsigned char var_12 = (unsigned char)210;
unsigned char var_19 = (unsigned char)48;
int zero = 0;
unsigned short var_20 = (unsigned short)28937;
unsigned short var_21 = (unsigned short)43196;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
