#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
unsigned int var_2 = 1894152260U;
signed char var_4 = (signed char)42;
short var_5 = (short)29477;
signed char var_6 = (signed char)-106;
long long int var_7 = -6668696782105294013LL;
long long int var_8 = 3811932560571046677LL;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)64;
int zero = 0;
signed char var_14 = (signed char)-67;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
