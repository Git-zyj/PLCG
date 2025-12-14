#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7420665818933082915ULL;
int var_3 = -352339134;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = 1990094126;
unsigned long long int var_8 = 18322151814908016093ULL;
unsigned long long int var_13 = 5489205894368222136ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4029081223270588424ULL;
void init() {
}

void checksum() {
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
