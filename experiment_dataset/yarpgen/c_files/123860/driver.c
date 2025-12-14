#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 374648587;
unsigned short var_6 = (unsigned short)38710;
unsigned int var_8 = 3178206628U;
signed char var_11 = (signed char)-34;
int zero = 0;
unsigned long long int var_13 = 6826195225591678227ULL;
unsigned int var_14 = 1475940424U;
unsigned long long int var_15 = 1265256084417358659ULL;
short var_16 = (short)3077;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
