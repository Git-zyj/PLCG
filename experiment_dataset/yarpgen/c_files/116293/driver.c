#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 113542619;
unsigned int var_5 = 2102988571U;
unsigned int var_6 = 2652558954U;
unsigned short var_9 = (unsigned short)27677;
unsigned short var_13 = (unsigned short)57483;
int zero = 0;
signed char var_17 = (signed char)-32;
long long int var_18 = 514118915832009142LL;
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
