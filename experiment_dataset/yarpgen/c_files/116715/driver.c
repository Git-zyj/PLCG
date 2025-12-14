#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
signed char var_5 = (signed char)-29;
short var_8 = (short)-30680;
unsigned long long int var_14 = 11306290531893869707ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1232260610U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
