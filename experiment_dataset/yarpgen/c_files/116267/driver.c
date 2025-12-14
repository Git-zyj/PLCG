#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8222259858214425839LL;
signed char var_2 = (signed char)112;
unsigned int var_6 = 2200082673U;
unsigned char var_8 = (unsigned char)126;
unsigned int var_9 = 2059389886U;
long long int var_11 = 3066965270892424883LL;
long long int var_12 = 7331651825193838444LL;
int zero = 0;
unsigned char var_13 = (unsigned char)142;
long long int var_14 = -4150619008053504344LL;
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
