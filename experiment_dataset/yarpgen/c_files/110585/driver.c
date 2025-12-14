#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2511073884U;
signed char var_2 = (signed char)52;
unsigned char var_7 = (unsigned char)177;
long long int var_8 = 2781044931428742865LL;
int zero = 0;
unsigned long long int var_10 = 4024442955995627997ULL;
long long int var_11 = 1197434638766096847LL;
unsigned int var_12 = 2742596130U;
long long int var_13 = 4306376273855204915LL;
signed char var_14 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
