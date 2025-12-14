#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)61;
unsigned short var_4 = (unsigned short)21808;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56512;
unsigned int var_14 = 2613547904U;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
signed char var_16 = (signed char)26;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
