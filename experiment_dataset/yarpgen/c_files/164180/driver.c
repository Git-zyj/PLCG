#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48739;
short var_3 = (short)-6156;
signed char var_4 = (signed char)111;
signed char var_6 = (signed char)25;
int zero = 0;
unsigned short var_12 = (unsigned short)2821;
unsigned int var_13 = 3855721504U;
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
