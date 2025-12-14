#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)11332;
unsigned int var_12 = 2582592996U;
unsigned char var_16 = (unsigned char)7;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
unsigned int var_20 = 2003966178U;
signed char var_21 = (signed char)-125;
signed char var_22 = (signed char)-54;
long long int var_23 = -3868674240524810676LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
