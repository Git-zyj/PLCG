#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1255871670U;
long long int var_4 = 222834698777189693LL;
unsigned char var_8 = (unsigned char)55;
unsigned int var_10 = 146074915U;
signed char var_14 = (signed char)-115;
unsigned int var_15 = 3384416814U;
int zero = 0;
unsigned int var_16 = 1186977726U;
int var_17 = -691332941;
signed char var_18 = (signed char)-64;
void init() {
}

void checksum() {
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
