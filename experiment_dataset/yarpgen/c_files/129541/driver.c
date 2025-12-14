#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)49;
unsigned long long int var_10 = 14523565995775190260ULL;
unsigned short var_11 = (unsigned short)54527;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 817005481563178010ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
