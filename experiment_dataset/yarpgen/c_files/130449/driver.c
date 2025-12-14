#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 285497423522256701ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2574673270U;
unsigned char var_9 = (unsigned char)40;
unsigned int var_11 = 1479231594U;
unsigned int var_13 = 3614391857U;
unsigned int var_14 = 3893543165U;
_Bool var_15 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 2560107171819239457ULL;
int var_21 = -149584020;
unsigned int var_22 = 2143440937U;
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
