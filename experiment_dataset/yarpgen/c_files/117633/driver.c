#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16899;
unsigned char var_5 = (unsigned char)103;
unsigned short var_9 = (unsigned short)6977;
long long int var_12 = 5867661088307601309LL;
int zero = 0;
signed char var_13 = (signed char)62;
signed char var_14 = (signed char)-40;
_Bool var_15 = (_Bool)1;
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
