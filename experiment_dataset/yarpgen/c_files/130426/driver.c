#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
signed char var_2 = (signed char)72;
unsigned char var_3 = (unsigned char)88;
unsigned char var_4 = (unsigned char)187;
signed char var_5 = (signed char)77;
unsigned long long int var_6 = 3246276828898806971ULL;
int var_15 = -2092905735;
signed char var_16 = (signed char)1;
signed char var_17 = (signed char)96;
int zero = 0;
unsigned int var_18 = 2566793202U;
signed char var_19 = (signed char)40;
signed char var_20 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
