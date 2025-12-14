#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)107;
unsigned char var_3 = (unsigned char)24;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2626751100U;
int var_10 = 875832001;
long long int var_13 = -2465754373782944801LL;
int zero = 0;
unsigned int var_16 = 1495293440U;
unsigned long long int var_17 = 13012469625361407947ULL;
long long int var_18 = 2957123391060577433LL;
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
