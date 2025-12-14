#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 700779073;
int var_6 = -1910585103;
unsigned short var_7 = (unsigned short)39687;
unsigned char var_8 = (unsigned char)2;
unsigned int var_9 = 2120966334U;
int zero = 0;
signed char var_11 = (signed char)111;
unsigned long long int var_12 = 6386354177260605079ULL;
signed char var_13 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
