#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3470081550U;
int var_4 = -93650671;
signed char var_9 = (signed char)-73;
unsigned long long int var_10 = 9277252012246255949ULL;
unsigned long long int var_13 = 16829910878717924821ULL;
unsigned int var_14 = 2962298518U;
unsigned int var_15 = 2410725468U;
unsigned char var_16 = (unsigned char)125;
int zero = 0;
unsigned char var_20 = (unsigned char)216;
unsigned int var_21 = 1666623447U;
unsigned int var_22 = 3382657301U;
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
