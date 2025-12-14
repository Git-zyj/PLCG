#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -926113711;
unsigned char var_3 = (unsigned char)237;
signed char var_6 = (signed char)112;
long long int var_8 = 3586047224733807311LL;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)15992;
unsigned short var_15 = (unsigned short)28742;
int var_16 = 930298360;
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
