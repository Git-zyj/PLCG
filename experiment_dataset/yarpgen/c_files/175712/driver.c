#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
signed char var_2 = (signed char)23;
unsigned short var_3 = (unsigned short)38101;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7102049082660609041ULL;
short var_6 = (short)-22705;
short var_8 = (short)1596;
short var_9 = (short)7588;
int zero = 0;
signed char var_10 = (signed char)83;
unsigned short var_11 = (unsigned short)9125;
unsigned long long int var_12 = 17394273499657874855ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
