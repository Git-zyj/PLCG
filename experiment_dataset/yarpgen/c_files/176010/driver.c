#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2945284666131993711LL;
unsigned short var_1 = (unsigned short)42015;
int var_4 = -1508005549;
short var_5 = (short)-8916;
_Bool var_7 = (_Bool)0;
unsigned int var_14 = 2178400439U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 364644486U;
unsigned long long int var_18 = 8887832055080380511ULL;
unsigned short var_19 = (unsigned short)12385;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
