#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15279;
unsigned int var_4 = 2991269641U;
unsigned int var_10 = 1257668794U;
signed char var_11 = (signed char)-97;
unsigned short var_13 = (unsigned short)13687;
signed char var_15 = (signed char)-58;
int zero = 0;
unsigned long long int var_19 = 10408542549310976455ULL;
unsigned char var_20 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
