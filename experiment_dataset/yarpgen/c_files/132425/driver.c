#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 58651026;
unsigned short var_3 = (unsigned short)46836;
unsigned int var_4 = 3066789549U;
unsigned char var_5 = (unsigned char)79;
_Bool var_6 = (_Bool)1;
int var_8 = -2134461873;
signed char var_9 = (signed char)3;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
short var_14 = (short)19925;
unsigned long long int var_15 = 747701286851008163ULL;
unsigned char var_16 = (unsigned char)176;
unsigned long long int var_17 = 17665960200930409053ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
