#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1835219348;
unsigned long long int var_2 = 8392085657549279752ULL;
int var_4 = 1381009880;
short var_6 = (short)-1410;
unsigned short var_7 = (unsigned short)26945;
signed char var_8 = (signed char)-115;
unsigned long long int var_9 = 11889042659675162398ULL;
long long int var_11 = -8844474404884279862LL;
_Bool var_12 = (_Bool)1;
signed char var_17 = (signed char)96;
int zero = 0;
long long int var_19 = -5280647741033514625LL;
unsigned long long int var_20 = 10787805329122205944ULL;
unsigned short var_21 = (unsigned short)14251;
long long int var_22 = -5770800542846985497LL;
void init() {
}

void checksum() {
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
