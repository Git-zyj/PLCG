#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-25;
unsigned int var_6 = 785125582U;
long long int var_10 = 4473271866628322558LL;
signed char var_13 = (signed char)13;
int zero = 0;
unsigned int var_15 = 526606039U;
unsigned long long int var_16 = 9069998198816399375ULL;
int var_17 = 1718409193;
unsigned long long int var_18 = 10241210698677151312ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
