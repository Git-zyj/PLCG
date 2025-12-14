#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14704;
int var_2 = -1133612222;
unsigned int var_4 = 2108691631U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)64436;
unsigned short var_15 = (unsigned short)28189;
unsigned long long int var_16 = 5831217282790812522ULL;
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
