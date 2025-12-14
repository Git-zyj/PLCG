#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)15611;
signed char var_11 = (signed char)-123;
signed char var_18 = (signed char)40;
int zero = 0;
long long int var_20 = -7235291543361273405LL;
signed char var_21 = (signed char)-102;
unsigned char var_22 = (unsigned char)53;
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
