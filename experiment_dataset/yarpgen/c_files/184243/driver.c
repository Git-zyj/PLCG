#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
unsigned short var_4 = (unsigned short)63687;
unsigned int var_10 = 3519947337U;
long long int var_14 = 6664422454453384428LL;
signed char var_16 = (signed char)102;
unsigned short var_17 = (unsigned short)63204;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)45319;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
