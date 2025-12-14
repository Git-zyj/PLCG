#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2141074557U;
short var_2 = (short)14626;
short var_5 = (short)27678;
long long int var_7 = -2805493760861341521LL;
unsigned int var_8 = 2464891548U;
signed char var_9 = (signed char)38;
short var_10 = (short)11705;
signed char var_11 = (signed char)53;
unsigned short var_13 = (unsigned short)15967;
long long int var_14 = -5044093699626289862LL;
unsigned int var_16 = 3664221019U;
int zero = 0;
unsigned long long int var_18 = 6564065102696619459ULL;
unsigned int var_19 = 1119340906U;
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
