#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1593219243U;
unsigned long long int var_3 = 18270768721023411520ULL;
unsigned long long int var_10 = 14501176281618099938ULL;
unsigned char var_11 = (unsigned char)142;
short var_13 = (short)-24680;
short var_15 = (short)26089;
int zero = 0;
unsigned long long int var_16 = 2412706627087688333ULL;
short var_17 = (short)21248;
unsigned long long int var_18 = 1266677521823649321ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
