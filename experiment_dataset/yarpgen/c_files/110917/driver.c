#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3749602406U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)70;
short var_7 = (short)15546;
unsigned short var_8 = (unsigned short)14581;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)17882;
unsigned int var_17 = 515021441U;
unsigned char var_18 = (unsigned char)239;
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
