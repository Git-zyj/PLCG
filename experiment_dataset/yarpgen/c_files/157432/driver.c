#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-2;
long long int var_8 = 3572220467866501453LL;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
signed char var_18 = (signed char)-122;
long long int var_19 = -5009194507418841167LL;
signed char var_20 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
