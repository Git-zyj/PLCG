#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -746650542;
int var_4 = -719394532;
unsigned short var_5 = (unsigned short)50806;
signed char var_8 = (signed char)-23;
unsigned short var_11 = (unsigned short)39222;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = -1520097376;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
