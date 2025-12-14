#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14917;
signed char var_1 = (signed char)-5;
unsigned long long int var_15 = 11259346871022857997ULL;
unsigned short var_16 = (unsigned short)33035;
int zero = 0;
signed char var_19 = (signed char)17;
unsigned short var_20 = (unsigned short)26840;
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
