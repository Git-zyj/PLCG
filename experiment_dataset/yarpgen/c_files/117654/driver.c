#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 472596970U;
unsigned short var_3 = (unsigned short)33163;
signed char var_7 = (signed char)-80;
int zero = 0;
unsigned long long int var_12 = 1716182233202643321ULL;
unsigned int var_13 = 2726567872U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
