#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6288869010303321430ULL;
int var_1 = -1994024952;
unsigned short var_3 = (unsigned short)12088;
_Bool var_4 = (_Bool)1;
int var_8 = 897554587;
signed char var_10 = (signed char)28;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 8607990227846351041ULL;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
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
