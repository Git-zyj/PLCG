#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4043581084739039063LL;
unsigned int var_1 = 2863075320U;
long long int var_7 = 1265266591891790922LL;
unsigned char var_10 = (unsigned char)71;
signed char var_11 = (signed char)118;
int zero = 0;
long long int var_13 = -5041622304153842810LL;
int var_14 = 454780594;
int var_15 = -582652640;
unsigned int var_16 = 3441007826U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
