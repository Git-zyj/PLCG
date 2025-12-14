#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
int var_7 = 622652196;
long long int var_11 = 5041011382148798999LL;
unsigned short var_13 = (unsigned short)30753;
int zero = 0;
short var_17 = (short)30194;
unsigned int var_18 = 2767375407U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-9972;
unsigned char var_21 = (unsigned char)249;
signed char var_22 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
