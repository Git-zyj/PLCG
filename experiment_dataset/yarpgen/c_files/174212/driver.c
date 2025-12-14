#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned long long int var_2 = 5399113826128971214ULL;
unsigned char var_5 = (unsigned char)31;
signed char var_7 = (signed char)-63;
unsigned short var_12 = (unsigned short)46191;
unsigned char var_13 = (unsigned char)239;
int zero = 0;
unsigned int var_20 = 3104048303U;
int var_21 = -354897412;
unsigned short var_22 = (unsigned short)53251;
unsigned long long int var_23 = 2123472131786343990ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
