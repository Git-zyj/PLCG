#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -3705587767925177429LL;
unsigned short var_6 = (unsigned short)47934;
unsigned short var_9 = (unsigned short)46600;
int var_10 = 1304700391;
unsigned char var_11 = (unsigned char)155;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 3153443543U;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)28;
unsigned long long int var_21 = 15772887183159293187ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
