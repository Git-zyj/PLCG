#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
long long int var_1 = -8974299089186287277LL;
signed char var_3 = (signed char)49;
unsigned char var_4 = (unsigned char)85;
unsigned char var_5 = (unsigned char)45;
signed char var_8 = (signed char)125;
unsigned char var_11 = (unsigned char)111;
int zero = 0;
unsigned long long int var_13 = 3962010245901520174ULL;
unsigned int var_14 = 2893477508U;
unsigned int var_15 = 2152964938U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
