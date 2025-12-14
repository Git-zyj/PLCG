#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 75365934U;
long long int var_9 = -4614167015636695021LL;
signed char var_11 = (signed char)-25;
long long int var_12 = 2220579584053329608LL;
int zero = 0;
unsigned int var_13 = 3237527421U;
long long int var_14 = 7439778502834528075LL;
void init() {
}

void checksum() {
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
