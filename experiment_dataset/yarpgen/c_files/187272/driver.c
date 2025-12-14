#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
unsigned long long int var_2 = 17812271248360090779ULL;
signed char var_3 = (signed char)-122;
int zero = 0;
unsigned long long int var_20 = 9378887629622465130ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5093303694632686660LL;
unsigned char var_23 = (unsigned char)148;
unsigned long long int var_24 = 3796915856185650020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
