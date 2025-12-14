#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64628;
int var_2 = 580993953;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)16;
unsigned long long int var_6 = 3401338131650757654ULL;
signed char var_8 = (signed char)44;
_Bool var_9 = (_Bool)0;
int var_12 = 115551875;
unsigned long long int var_14 = 16224978463672130405ULL;
signed char var_16 = (signed char)78;
int var_17 = -1498780232;
int zero = 0;
unsigned short var_20 = (unsigned short)55969;
signed char var_21 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
