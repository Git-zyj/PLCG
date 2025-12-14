#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18431060250314879260ULL;
long long int var_2 = -4089772815032105572LL;
short var_4 = (short)11627;
int var_14 = 616333363;
int var_16 = 989479934;
int zero = 0;
unsigned char var_17 = (unsigned char)249;
short var_18 = (short)29738;
signed char var_19 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
