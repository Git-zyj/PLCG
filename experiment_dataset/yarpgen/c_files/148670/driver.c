#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8628489439482456329ULL;
unsigned long long int var_4 = 3068683268070754306ULL;
unsigned char var_5 = (unsigned char)240;
short var_6 = (short)-15979;
signed char var_7 = (signed char)72;
unsigned long long int var_8 = 13046693116414924816ULL;
unsigned long long int var_14 = 8046542457724743542ULL;
int zero = 0;
int var_15 = -628573241;
signed char var_16 = (signed char)-92;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
