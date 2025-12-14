#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 12449000790905146751ULL;
unsigned int var_6 = 3563366662U;
unsigned short var_12 = (unsigned short)6763;
int zero = 0;
long long int var_13 = 8071571867290905136LL;
unsigned long long int var_14 = 13473587811607028436ULL;
signed char var_15 = (signed char)-9;
signed char var_16 = (signed char)9;
unsigned short var_17 = (unsigned short)31371;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
