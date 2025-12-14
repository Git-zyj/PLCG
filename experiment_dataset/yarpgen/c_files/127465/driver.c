#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50883;
unsigned short var_2 = (unsigned short)59455;
_Bool var_5 = (_Bool)0;
unsigned short var_12 = (unsigned short)40412;
long long int var_15 = -6185548301725654720LL;
signed char var_19 = (signed char)-62;
int zero = 0;
unsigned short var_20 = (unsigned short)525;
unsigned short var_21 = (unsigned short)28634;
long long int var_22 = -8881355180921734761LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
