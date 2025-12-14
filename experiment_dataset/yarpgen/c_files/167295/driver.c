#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14062085120566461475ULL;
unsigned long long int var_3 = 16724151493387229388ULL;
unsigned short var_4 = (unsigned short)46824;
unsigned char var_6 = (unsigned char)210;
signed char var_7 = (signed char)-65;
unsigned int var_8 = 2471034485U;
unsigned int var_11 = 2265172257U;
int zero = 0;
signed char var_12 = (signed char)-85;
signed char var_13 = (signed char)126;
void init() {
}

void checksum() {
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
