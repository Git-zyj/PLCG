#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)83;
long long int var_4 = 4980487549737418733LL;
unsigned long long int var_5 = 8307833852222274572ULL;
unsigned long long int var_6 = 12102083468926570508ULL;
signed char var_7 = (signed char)9;
unsigned char var_10 = (unsigned char)11;
int zero = 0;
signed char var_11 = (signed char)78;
signed char var_12 = (signed char)31;
signed char var_13 = (signed char)71;
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
