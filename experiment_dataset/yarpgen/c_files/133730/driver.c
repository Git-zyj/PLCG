#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7106089308802103798LL;
unsigned char var_1 = (unsigned char)176;
unsigned short var_5 = (unsigned short)20060;
signed char var_7 = (signed char)-13;
unsigned char var_8 = (unsigned char)113;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)59607;
signed char var_13 = (signed char)88;
unsigned int var_14 = 825079148U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
