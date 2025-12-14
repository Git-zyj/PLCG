#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)23;
signed char var_3 = (signed char)86;
int var_5 = -914519565;
short var_7 = (short)-2941;
int zero = 0;
unsigned long long int var_10 = 16181085096653616031ULL;
unsigned long long int var_11 = 17970910919669938743ULL;
signed char var_12 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
