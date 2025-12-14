#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1951796774;
short var_1 = (short)29629;
unsigned char var_3 = (unsigned char)11;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11607493708240015614ULL;
unsigned char var_13 = (unsigned char)141;
unsigned int var_14 = 3670286352U;
int zero = 0;
short var_15 = (short)-19320;
unsigned long long int var_16 = 16899657252437589748ULL;
signed char var_17 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
