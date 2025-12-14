#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1470;
signed char var_3 = (signed char)-10;
signed char var_5 = (signed char)19;
long long int var_11 = -8086484218897480712LL;
int zero = 0;
long long int var_16 = 3082688468425168950LL;
long long int var_17 = 7482365463254004528LL;
signed char var_18 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
