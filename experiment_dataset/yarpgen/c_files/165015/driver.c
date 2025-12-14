#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27013;
int var_2 = 955129956;
short var_5 = (short)13076;
unsigned long long int var_7 = 12049648016402888535ULL;
unsigned char var_15 = (unsigned char)215;
short var_17 = (short)30843;
int zero = 0;
signed char var_18 = (signed char)26;
unsigned short var_19 = (unsigned short)27953;
_Bool var_20 = (_Bool)0;
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
