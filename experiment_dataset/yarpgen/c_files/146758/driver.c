#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -646993084;
int var_3 = 1237634219;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 13730604718323495046ULL;
int zero = 0;
unsigned long long int var_11 = 11196828390107591754ULL;
unsigned long long int var_12 = 13536153672337674950ULL;
long long int var_13 = -6995933233662442078LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
