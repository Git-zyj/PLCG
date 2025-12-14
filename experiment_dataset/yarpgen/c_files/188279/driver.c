#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)43;
short var_3 = (short)19222;
long long int var_5 = 83459671495515571LL;
unsigned char var_10 = (unsigned char)103;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-2407;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-111;
int zero = 0;
unsigned long long int var_16 = 13802858759897882542ULL;
unsigned short var_17 = (unsigned short)8688;
unsigned int var_18 = 2398486343U;
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
