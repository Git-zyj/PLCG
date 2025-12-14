#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1826304691;
unsigned short var_2 = (unsigned short)56932;
signed char var_3 = (signed char)67;
unsigned long long int var_6 = 17470356151028393881ULL;
long long int var_9 = -6134747143476590520LL;
int zero = 0;
unsigned int var_10 = 2133215024U;
signed char var_11 = (signed char)49;
short var_12 = (short)-29224;
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
