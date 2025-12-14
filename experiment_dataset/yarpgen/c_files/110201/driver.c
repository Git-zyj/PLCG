#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_2 = 7204341926171776519ULL;
long long int var_5 = -854233194318425536LL;
unsigned char var_7 = (unsigned char)221;
int var_9 = -166275009;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 430534446543818345ULL;
signed char var_13 = (signed char)-64;
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
