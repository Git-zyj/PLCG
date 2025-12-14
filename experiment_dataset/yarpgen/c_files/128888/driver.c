#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15571023262361924752ULL;
signed char var_8 = (signed char)42;
unsigned int var_9 = 1470482051U;
int zero = 0;
unsigned short var_12 = (unsigned short)32266;
long long int var_13 = -1695049268416633926LL;
unsigned int var_14 = 1793625669U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
