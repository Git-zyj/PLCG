#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-62;
_Bool var_6 = (_Bool)1;
long long int var_10 = 1198273955837933319LL;
unsigned char var_11 = (unsigned char)196;
unsigned int var_12 = 3000787075U;
unsigned int var_14 = 1002357828U;
int zero = 0;
unsigned short var_20 = (unsigned short)45164;
signed char var_21 = (signed char)66;
void init() {
}

void checksum() {
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
