#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
int var_2 = 1150698785;
unsigned char var_3 = (unsigned char)99;
unsigned short var_5 = (unsigned short)9034;
unsigned long long int var_14 = 11918760394512661403ULL;
int zero = 0;
unsigned long long int var_15 = 14429589658289956732ULL;
signed char var_16 = (signed char)-120;
short var_17 = (short)15269;
short var_18 = (short)8437;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
