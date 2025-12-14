#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4383928245764591349LL;
unsigned char var_1 = (unsigned char)148;
unsigned int var_2 = 2522518171U;
unsigned short var_4 = (unsigned short)61771;
unsigned short var_5 = (unsigned short)27863;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)391;
signed char var_10 = (signed char)-56;
int zero = 0;
long long int var_12 = -7763189590342560302LL;
unsigned char var_13 = (unsigned char)241;
long long int var_14 = -3554980553057258237LL;
unsigned short var_15 = (unsigned short)24309;
signed char var_16 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
