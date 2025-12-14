#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3998996415U;
_Bool var_2 = (_Bool)1;
long long int var_4 = 507755116445692352LL;
signed char var_6 = (signed char)21;
int zero = 0;
unsigned int var_17 = 1012574728U;
unsigned short var_18 = (unsigned short)51416;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
