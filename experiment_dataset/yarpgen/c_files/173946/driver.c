#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)28007;
unsigned short var_9 = (unsigned short)54288;
int var_11 = -762308424;
short var_12 = (short)23312;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 266682935019833261ULL;
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
