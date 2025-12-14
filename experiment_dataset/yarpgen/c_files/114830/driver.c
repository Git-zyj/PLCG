#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 852476550U;
unsigned int var_7 = 4075461235U;
signed char var_9 = (signed char)68;
int var_10 = -572470589;
unsigned int var_17 = 1573014318U;
int zero = 0;
long long int var_18 = 1644332389425072363LL;
int var_19 = 334449420;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
