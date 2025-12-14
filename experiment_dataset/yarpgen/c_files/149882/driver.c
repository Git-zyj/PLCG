#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 285575839U;
short var_5 = (short)-11962;
short var_6 = (short)-22150;
short var_7 = (short)13785;
short var_9 = (short)-27443;
unsigned char var_11 = (unsigned char)221;
int var_13 = -669468541;
unsigned short var_14 = (unsigned short)21809;
int zero = 0;
unsigned int var_15 = 1110258206U;
signed char var_16 = (signed char)22;
signed char var_17 = (signed char)-123;
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
