#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7999182683808797008LL;
unsigned char var_8 = (unsigned char)37;
unsigned int var_12 = 589513353U;
_Bool var_13 = (_Bool)0;
unsigned short var_17 = (unsigned short)24742;
int zero = 0;
long long int var_20 = 2099394084966150051LL;
unsigned int var_21 = 1777487549U;
unsigned short var_22 = (unsigned short)30980;
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
