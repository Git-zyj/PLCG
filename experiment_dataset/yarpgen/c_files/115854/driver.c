#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)179;
unsigned char var_4 = (unsigned char)223;
unsigned long long int var_5 = 359105122060324269ULL;
_Bool var_6 = (_Bool)1;
int var_9 = 240148566;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9816859699348783790ULL;
int var_22 = 496058938;
short var_23 = (short)12823;
void init() {
}

void checksum() {
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
