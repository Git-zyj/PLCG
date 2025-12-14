#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-97;
short var_4 = (short)-26224;
short var_15 = (short)-346;
int zero = 0;
signed char var_16 = (signed char)-116;
unsigned short var_17 = (unsigned short)4661;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
