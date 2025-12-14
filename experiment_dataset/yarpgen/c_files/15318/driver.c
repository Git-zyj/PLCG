#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9168809700258509959LL;
short var_6 = (short)-24953;
unsigned int var_17 = 1819640979U;
long long int var_18 = -5429484134195366975LL;
int zero = 0;
unsigned long long int var_19 = 7036856309025734730ULL;
unsigned int var_20 = 152092675U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
