#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_1 = (signed char)-37;
signed char var_3 = (signed char)1;
int var_7 = -1741713085;
signed char var_8 = (signed char)-112;
unsigned short var_9 = (unsigned short)6935;
int zero = 0;
unsigned long long int var_11 = 7772131088326849963ULL;
signed char var_12 = (signed char)-92;
int var_13 = 820471206;
signed char var_14 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
