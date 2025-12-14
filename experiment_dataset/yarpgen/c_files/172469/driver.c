#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned int var_4 = 1921976804U;
signed char var_6 = (signed char)-19;
signed char var_8 = (signed char)-125;
signed char var_9 = (signed char)88;
int var_10 = -987207239;
int zero = 0;
signed char var_15 = (signed char)57;
long long int var_16 = 6632421298011487506LL;
unsigned short var_17 = (unsigned short)32328;
unsigned int var_18 = 3357048804U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
