#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21154;
long long int var_9 = -726174829030452724LL;
unsigned char var_12 = (unsigned char)173;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-5;
int zero = 0;
unsigned int var_19 = 3992213557U;
unsigned int var_20 = 1877765866U;
void init() {
}

void checksum() {
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
