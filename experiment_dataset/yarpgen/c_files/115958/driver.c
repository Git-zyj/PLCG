#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1269200073;
signed char var_9 = (signed char)-58;
unsigned char var_13 = (unsigned char)209;
int zero = 0;
short var_14 = (short)10937;
unsigned short var_15 = (unsigned short)10179;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
