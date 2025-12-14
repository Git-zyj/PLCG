#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
int var_6 = -893949166;
long long int var_8 = 4545705674750947737LL;
unsigned int var_9 = 1411168482U;
signed char var_12 = (signed char)-125;
int zero = 0;
int var_13 = -1033733547;
int var_14 = 90498509;
long long int var_15 = 8011478810193298391LL;
unsigned char var_16 = (unsigned char)49;
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
