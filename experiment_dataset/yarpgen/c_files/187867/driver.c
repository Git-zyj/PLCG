#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2056680290;
unsigned long long int var_4 = 2151188469509447558ULL;
_Bool var_9 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int var_19 = -2081012155;
int zero = 0;
signed char var_20 = (signed char)99;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8689292461270962404ULL;
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
