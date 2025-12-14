#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)155;
unsigned char var_6 = (unsigned char)46;
signed char var_7 = (signed char)-61;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 598163155394563659LL;
long long int var_15 = -9059666453315321917LL;
unsigned char var_16 = (unsigned char)29;
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
