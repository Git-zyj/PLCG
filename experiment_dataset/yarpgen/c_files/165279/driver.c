#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19587;
signed char var_3 = (signed char)11;
unsigned long long int var_4 = 2607164598658888276ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)63;
unsigned long long int var_9 = 8423234055703652405ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 610542758;
short var_18 = (short)-30568;
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
