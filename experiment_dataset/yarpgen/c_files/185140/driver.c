#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10773766568112287484ULL;
unsigned int var_7 = 4254363531U;
unsigned short var_8 = (unsigned short)56927;
unsigned int var_11 = 3406879747U;
unsigned short var_17 = (unsigned short)28632;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned int var_20 = 325344763U;
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
