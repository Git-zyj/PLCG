#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1741372934633065256LL;
unsigned long long int var_5 = 6800914190734064157ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10366418555595253861ULL;
int var_10 = 356819327;
int zero = 0;
unsigned char var_11 = (unsigned char)88;
unsigned long long int var_12 = 9197233793825629171ULL;
short var_13 = (short)-24939;
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
