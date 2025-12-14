#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-34;
signed char var_4 = (signed char)-48;
_Bool var_7 = (_Bool)1;
signed char var_13 = (signed char)-59;
signed char var_14 = (signed char)87;
int zero = 0;
unsigned short var_15 = (unsigned short)65097;
signed char var_16 = (signed char)43;
unsigned char var_17 = (unsigned char)5;
int var_18 = 1367489336;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
