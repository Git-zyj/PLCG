#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23247;
unsigned long long int var_2 = 789673266750604272ULL;
unsigned char var_3 = (unsigned char)136;
short var_4 = (short)-15419;
signed char var_12 = (signed char)96;
int zero = 0;
signed char var_13 = (signed char)53;
unsigned short var_14 = (unsigned short)57583;
unsigned long long int var_15 = 17102761134164906665ULL;
void init() {
}

void checksum() {
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
