#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 166319612U;
int var_8 = -1158086031;
int var_10 = -871695237;
int zero = 0;
short var_14 = (short)8070;
short var_15 = (short)-3687;
long long int var_16 = -4892012983047717261LL;
unsigned int var_17 = 958310475U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
