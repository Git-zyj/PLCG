#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)223;
unsigned long long int var_6 = 2865945000679619286ULL;
signed char var_10 = (signed char)71;
short var_12 = (short)-2434;
long long int var_15 = -1524207570002713830LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2157566976U;
unsigned long long int var_20 = 3976443820150332978ULL;
int var_21 = -1184190168;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
