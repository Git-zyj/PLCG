#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
signed char var_7 = (signed char)-6;
unsigned short var_11 = (unsigned short)46554;
int var_13 = -1142201323;
int zero = 0;
unsigned short var_16 = (unsigned short)53320;
unsigned int var_17 = 3377964903U;
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
