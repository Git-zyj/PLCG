#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1781724446;
int var_3 = 412934370;
unsigned short var_5 = (unsigned short)1036;
short var_7 = (short)-29226;
long long int var_8 = 4892694481019839087LL;
unsigned int var_12 = 1488734299U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-69;
unsigned short var_21 = (unsigned short)27926;
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
