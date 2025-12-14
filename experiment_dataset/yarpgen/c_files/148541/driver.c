#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6282172027563733369LL;
signed char var_9 = (signed char)54;
signed char var_10 = (signed char)-5;
unsigned int var_12 = 3517150772U;
unsigned int var_13 = 2204123424U;
int zero = 0;
unsigned int var_20 = 2627032971U;
long long int var_21 = -904296702278487997LL;
unsigned int var_22 = 4256403435U;
signed char var_23 = (signed char)98;
unsigned char var_24 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
