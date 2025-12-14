#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6774;
signed char var_8 = (signed char)-31;
unsigned long long int var_13 = 397761847335794489ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)59933;
unsigned long long int var_17 = 9088749083585991ULL;
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
