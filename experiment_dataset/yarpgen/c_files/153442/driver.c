#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29059;
long long int var_7 = -7931266138731481079LL;
unsigned char var_10 = (unsigned char)78;
unsigned int var_15 = 1275337050U;
int zero = 0;
short var_19 = (short)-999;
unsigned int var_20 = 3477459379U;
long long int var_21 = 346828878470073696LL;
unsigned int var_22 = 4204996204U;
signed char var_23 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
