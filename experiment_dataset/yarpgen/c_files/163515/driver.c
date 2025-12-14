#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)127;
unsigned char var_18 = (unsigned char)229;
signed char var_19 = (signed char)19;
int zero = 0;
long long int var_20 = 6129389163462859472LL;
long long int var_21 = -364668616882588358LL;
long long int var_22 = -919738814645390899LL;
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
