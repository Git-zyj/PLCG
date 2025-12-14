#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2839887759255784721ULL;
int var_2 = -2107202006;
unsigned short var_3 = (unsigned short)56333;
signed char var_5 = (signed char)123;
unsigned char var_7 = (unsigned char)57;
unsigned char var_8 = (unsigned char)175;
unsigned short var_11 = (unsigned short)49193;
unsigned long long int var_13 = 9461030360212263463ULL;
unsigned char var_15 = (unsigned char)120;
int zero = 0;
unsigned short var_17 = (unsigned short)64848;
int var_18 = 1575080776;
void init() {
}

void checksum() {
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
