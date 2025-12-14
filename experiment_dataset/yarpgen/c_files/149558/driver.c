#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -484572441;
int var_2 = 445358738;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)78;
signed char var_6 = (signed char)88;
int var_7 = -1960508217;
int zero = 0;
unsigned long long int var_11 = 5251671420279787559ULL;
int var_12 = 632302429;
signed char var_13 = (signed char)17;
unsigned long long int var_14 = 7955580330469039099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
