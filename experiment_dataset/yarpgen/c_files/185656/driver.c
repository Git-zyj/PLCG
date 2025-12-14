#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)184;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-83;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)12;
unsigned long long int var_18 = 17584623908701544485ULL;
int zero = 0;
unsigned long long int var_19 = 37241173387992182ULL;
signed char var_20 = (signed char)-86;
void init() {
}

void checksum() {
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
