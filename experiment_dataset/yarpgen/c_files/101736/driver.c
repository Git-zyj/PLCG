#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned char var_4 = (unsigned char)185;
short var_5 = (short)28986;
long long int var_10 = 1138761026307815223LL;
int zero = 0;
short var_12 = (short)4354;
signed char var_13 = (signed char)94;
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
