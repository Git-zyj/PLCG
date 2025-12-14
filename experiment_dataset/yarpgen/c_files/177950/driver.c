#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 2851312602U;
unsigned short var_6 = (unsigned short)29791;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-9;
unsigned long long int var_9 = 7865161508552292675ULL;
unsigned int var_13 = 502708737U;
int zero = 0;
unsigned short var_14 = (unsigned short)13712;
unsigned int var_15 = 4059032300U;
unsigned long long int var_16 = 13456888018524609382ULL;
void init() {
}

void checksum() {
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
