#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4699121759366373154LL;
unsigned long long int var_1 = 17318006752864585563ULL;
long long int var_5 = -6263895575336235079LL;
unsigned char var_6 = (unsigned char)174;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)30;
short var_19 = (short)28102;
void init() {
}

void checksum() {
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
