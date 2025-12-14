#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3229697647U;
signed char var_5 = (signed char)117;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 16769114031991550162ULL;
unsigned long long int var_11 = 11643897007031797016ULL;
unsigned long long int var_13 = 13312575756163314779ULL;
int zero = 0;
unsigned int var_14 = 3406949805U;
int var_15 = -727177989;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
