#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14087504817753664271ULL;
int var_10 = 188517071;
unsigned int var_12 = 1375280100U;
int var_13 = 871924465;
signed char var_15 = (signed char)60;
int zero = 0;
unsigned int var_17 = 2664531975U;
short var_18 = (short)3170;
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
