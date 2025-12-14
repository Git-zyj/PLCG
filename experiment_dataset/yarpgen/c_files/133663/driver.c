#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9828;
unsigned int var_2 = 4121307014U;
unsigned char var_4 = (unsigned char)119;
_Bool var_7 = (_Bool)1;
unsigned int var_12 = 592526041U;
int zero = 0;
unsigned short var_13 = (unsigned short)17740;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-120;
short var_16 = (short)-1356;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
