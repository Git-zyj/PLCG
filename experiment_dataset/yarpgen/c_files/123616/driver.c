#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4087874101U;
unsigned short var_3 = (unsigned short)59870;
int var_5 = 958369169;
unsigned int var_6 = 902169382U;
signed char var_8 = (signed char)118;
unsigned short var_9 = (unsigned short)41426;
int zero = 0;
signed char var_10 = (signed char)-24;
unsigned int var_11 = 1349852160U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
