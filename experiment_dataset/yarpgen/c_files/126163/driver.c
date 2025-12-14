#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5912217750254860368ULL;
unsigned char var_8 = (unsigned char)14;
int var_9 = 1683017374;
long long int var_12 = 1827765969884845372LL;
unsigned char var_16 = (unsigned char)244;
int var_17 = -1661429634;
int zero = 0;
unsigned long long int var_18 = 11347507743602481090ULL;
signed char var_19 = (signed char)82;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 14785195U;
unsigned char var_22 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
