#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7220557646389749421LL;
unsigned int var_10 = 4152500170U;
signed char var_14 = (signed char)14;
int zero = 0;
unsigned char var_15 = (unsigned char)187;
signed char var_16 = (signed char)59;
signed char var_17 = (signed char)99;
long long int var_18 = -5732944896129113438LL;
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
