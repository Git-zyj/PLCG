#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15443136102102431896ULL;
unsigned long long int var_2 = 6573851971474188907ULL;
signed char var_7 = (signed char)-102;
int zero = 0;
unsigned char var_10 = (unsigned char)174;
unsigned short var_11 = (unsigned short)34775;
signed char var_12 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
