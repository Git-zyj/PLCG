#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -759252260;
signed char var_3 = (signed char)-9;
signed char var_4 = (signed char)73;
unsigned char var_14 = (unsigned char)172;
unsigned char var_15 = (unsigned char)53;
int zero = 0;
unsigned char var_18 = (unsigned char)142;
unsigned int var_19 = 60234486U;
void init() {
}

void checksum() {
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
