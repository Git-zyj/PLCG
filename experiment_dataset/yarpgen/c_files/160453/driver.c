#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7090156402864451832ULL;
unsigned char var_1 = (unsigned char)51;
unsigned char var_2 = (unsigned char)197;
signed char var_7 = (signed char)83;
signed char var_9 = (signed char)99;
unsigned int var_13 = 616184873U;
unsigned long long int var_15 = 18073424544888245213ULL;
int zero = 0;
unsigned int var_16 = 3681547502U;
unsigned long long int var_17 = 17963806530042439316ULL;
short var_18 = (short)14736;
unsigned char var_19 = (unsigned char)237;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
