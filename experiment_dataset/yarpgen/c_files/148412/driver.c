#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1178333946;
long long int var_6 = -5025922603786878312LL;
unsigned int var_7 = 3981410113U;
unsigned short var_8 = (unsigned short)14376;
short var_11 = (short)24552;
signed char var_12 = (signed char)-118;
int zero = 0;
short var_14 = (short)3656;
unsigned int var_15 = 217926255U;
long long int var_16 = 2742789693563389350LL;
void init() {
}

void checksum() {
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
