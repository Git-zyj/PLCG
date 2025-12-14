#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2844180481331863400ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2477974833U;
unsigned int var_5 = 3428368499U;
signed char var_6 = (signed char)-119;
int var_7 = -1719626079;
short var_10 = (short)-7939;
unsigned short var_14 = (unsigned short)24285;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 17829880853530331756ULL;
signed char var_17 = (signed char)104;
short var_18 = (short)-24024;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
