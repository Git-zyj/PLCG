#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 525688081874378280ULL;
int var_7 = 506801075;
signed char var_12 = (signed char)-100;
signed char var_14 = (signed char)36;
short var_15 = (short)24202;
int zero = 0;
int var_16 = 1173664906;
unsigned char var_17 = (unsigned char)161;
signed char var_18 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
