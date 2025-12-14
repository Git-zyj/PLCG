#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
_Bool var_2 = (_Bool)1;
signed char var_14 = (signed char)-119;
long long int var_18 = 8971293168123873547LL;
int zero = 0;
signed char var_20 = (signed char)17;
int var_21 = -1880503392;
short var_22 = (short)26947;
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
