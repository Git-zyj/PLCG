#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13941;
long long int var_3 = -7525901974614548203LL;
unsigned short var_10 = (unsigned short)16999;
signed char var_15 = (signed char)66;
int zero = 0;
short var_17 = (short)-20111;
unsigned short var_18 = (unsigned short)52841;
int var_19 = -307750524;
unsigned long long int var_20 = 1100419188325618349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
