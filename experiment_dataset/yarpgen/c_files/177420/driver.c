#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10561948453186559628ULL;
unsigned long long int var_18 = 14141483337731188790ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)88;
int var_21 = -1484602160;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)5;
unsigned long long int var_24 = 17412062152786110730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
