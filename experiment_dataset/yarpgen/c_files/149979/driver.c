#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)97;
long long int var_6 = 7849006708326551132LL;
unsigned char var_10 = (unsigned char)89;
signed char var_16 = (signed char)42;
int zero = 0;
unsigned int var_19 = 3525053514U;
unsigned long long int var_20 = 5706462867692289775ULL;
unsigned int var_21 = 2251266026U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
