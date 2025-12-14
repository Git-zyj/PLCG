#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10616;
unsigned short var_6 = (unsigned short)6288;
unsigned long long int var_9 = 13570056930828895004ULL;
signed char var_14 = (signed char)85;
int zero = 0;
short var_16 = (short)-30057;
signed char var_17 = (signed char)40;
unsigned long long int var_18 = 13541939541676521376ULL;
void init() {
}

void checksum() {
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
