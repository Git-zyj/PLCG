#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11407479521745749438ULL;
signed char var_6 = (signed char)-108;
short var_12 = (short)28656;
long long int var_16 = -6445404559795974074LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 9063683903781408698LL;
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
