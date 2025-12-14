#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned short var_7 = (unsigned short)7504;
unsigned int var_8 = 3481157555U;
unsigned long long int var_9 = 5575911720889518222ULL;
unsigned int var_11 = 2512041719U;
long long int var_12 = -8666120743807107660LL;
unsigned char var_15 = (unsigned char)245;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)58146;
unsigned char var_18 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
