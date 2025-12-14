#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3003102787U;
signed char var_2 = (signed char)-34;
unsigned short var_4 = (unsigned short)64467;
unsigned char var_6 = (unsigned char)239;
int var_8 = 1911906299;
unsigned char var_10 = (unsigned char)43;
unsigned short var_11 = (unsigned short)7279;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-11444;
unsigned long long int var_14 = 1610954942024009082ULL;
signed char var_15 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
