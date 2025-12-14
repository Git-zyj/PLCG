#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 604134804297454045ULL;
short var_5 = (short)-29313;
unsigned int var_6 = 2494775519U;
_Bool var_13 = (_Bool)0;
short var_17 = (short)23053;
int zero = 0;
unsigned int var_20 = 2081300642U;
int var_21 = -915317909;
short var_22 = (short)21922;
unsigned int var_23 = 2543284303U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
