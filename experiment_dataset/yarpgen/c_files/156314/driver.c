#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 578579080U;
unsigned int var_5 = 1108265694U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)27732;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 1479469614U;
int zero = 0;
unsigned int var_17 = 4169727608U;
short var_18 = (short)17528;
short var_19 = (short)10845;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
