#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60941;
unsigned int var_11 = 3113126606U;
long long int var_12 = -8312900564771531459LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)29;
long long int var_21 = -1899800086486428247LL;
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
