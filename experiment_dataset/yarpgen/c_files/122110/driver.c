#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3541058068921200481LL;
unsigned int var_3 = 908893626U;
unsigned char var_6 = (unsigned char)97;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-13;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-27524;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5428627635069896673LL;
int var_19 = -343303315;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
