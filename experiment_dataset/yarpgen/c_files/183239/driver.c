#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)62;
unsigned char var_2 = (unsigned char)67;
unsigned int var_6 = 97270290U;
unsigned long long int var_10 = 5698933884584423856ULL;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
unsigned long long int var_17 = 10883849292825483378ULL;
unsigned char var_18 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
