#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)62;
signed char var_3 = (signed char)109;
signed char var_6 = (signed char)-89;
signed char var_9 = (signed char)-3;
signed char var_10 = (signed char)-8;
short var_12 = (short)7393;
long long int var_13 = 7363076032123062899LL;
int zero = 0;
unsigned int var_14 = 3569837015U;
unsigned char var_15 = (unsigned char)128;
unsigned char var_16 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
