#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7601551134605351866LL;
unsigned short var_7 = (unsigned short)27748;
long long int var_8 = 6845008328791266379LL;
long long int var_9 = -9034093695751495060LL;
short var_10 = (short)-162;
unsigned int var_12 = 2197403200U;
unsigned char var_15 = (unsigned char)181;
signed char var_17 = (signed char)81;
int zero = 0;
short var_20 = (short)26043;
_Bool var_21 = (_Bool)0;
long long int var_22 = 118145041764720451LL;
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
