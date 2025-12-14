#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20610;
signed char var_2 = (signed char)-91;
unsigned long long int var_3 = 9695023800070015828ULL;
unsigned short var_4 = (unsigned short)59498;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2749540500U;
int zero = 0;
unsigned char var_10 = (unsigned char)6;
signed char var_11 = (signed char)103;
signed char var_12 = (signed char)-114;
unsigned char var_13 = (unsigned char)17;
long long int var_14 = 7963864282041968296LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
