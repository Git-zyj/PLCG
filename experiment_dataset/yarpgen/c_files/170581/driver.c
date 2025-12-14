#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3671;
unsigned char var_2 = (unsigned char)128;
signed char var_4 = (signed char)-108;
unsigned int var_6 = 46714596U;
short var_7 = (short)20085;
long long int var_12 = 2330180291353072516LL;
unsigned int var_13 = 1246348564U;
unsigned short var_15 = (unsigned short)32113;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
unsigned int var_19 = 3429719194U;
unsigned long long int var_20 = 10399356534451975627ULL;
unsigned long long int var_21 = 4527047134886882348ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
