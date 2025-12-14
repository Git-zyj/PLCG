#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6622506397746236521LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = -6880760057253237999LL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-4;
signed char var_12 = (signed char)24;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2022339842U;
short var_16 = (short)-7090;
unsigned short var_17 = (unsigned short)16630;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
