#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59099;
unsigned long long int var_2 = 17148022998817376141ULL;
short var_3 = (short)-12148;
unsigned long long int var_14 = 14270306432160374101ULL;
int zero = 0;
signed char var_15 = (signed char)-68;
unsigned short var_16 = (unsigned short)34878;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
