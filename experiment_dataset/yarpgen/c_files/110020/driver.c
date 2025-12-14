#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned short var_2 = (unsigned short)59656;
_Bool var_3 = (_Bool)0;
unsigned int var_12 = 4182579078U;
unsigned long long int var_16 = 123644095113338339ULL;
int zero = 0;
unsigned long long int var_20 = 3835944967769356039ULL;
unsigned long long int var_21 = 2934020644754754943ULL;
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
