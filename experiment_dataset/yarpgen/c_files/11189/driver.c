#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned short var_2 = (unsigned short)20223;
signed char var_3 = (signed char)77;
unsigned short var_4 = (unsigned short)43311;
unsigned long long int var_6 = 11882826421755437632ULL;
unsigned int var_10 = 2268871646U;
unsigned int var_11 = 1795264589U;
int zero = 0;
int var_12 = 1519995949;
unsigned char var_13 = (unsigned char)220;
unsigned long long int var_14 = 13245230443552526505ULL;
int var_15 = 706802910;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
