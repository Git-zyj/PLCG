#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)244;
long long int var_7 = -1941176325627380290LL;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 580581870U;
int var_18 = -454711400;
long long int var_19 = 5275930498212496990LL;
int zero = 0;
unsigned char var_20 = (unsigned char)1;
unsigned int var_21 = 3862782104U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
