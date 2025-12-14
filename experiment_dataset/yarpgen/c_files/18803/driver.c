#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 49114756;
signed char var_4 = (signed char)-114;
signed char var_15 = (signed char)-75;
int zero = 0;
unsigned char var_19 = (unsigned char)217;
unsigned int var_20 = 1959464707U;
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
