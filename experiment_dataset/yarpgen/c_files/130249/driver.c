#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51801;
signed char var_11 = (signed char)44;
short var_12 = (short)-10578;
unsigned int var_16 = 2592501861U;
int zero = 0;
int var_17 = 400066844;
signed char var_18 = (signed char)20;
void init() {
}

void checksum() {
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
