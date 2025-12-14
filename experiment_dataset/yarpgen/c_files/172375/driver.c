#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12326129491957063726ULL;
unsigned long long int var_7 = 47934469048916208ULL;
int var_12 = -2104471049;
unsigned long long int var_17 = 5168601359946359502ULL;
unsigned long long int var_19 = 1465667130256198164ULL;
int zero = 0;
unsigned long long int var_20 = 7429527597874608226ULL;
signed char var_21 = (signed char)90;
signed char var_22 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
