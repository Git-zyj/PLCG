#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1955232219224091418ULL;
signed char var_2 = (signed char)-81;
_Bool var_7 = (_Bool)1;
long long int var_8 = -4751746985672455482LL;
signed char var_14 = (signed char)-20;
unsigned short var_16 = (unsigned short)64660;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)16324;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
