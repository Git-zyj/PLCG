#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10034;
int var_5 = 169419466;
long long int var_6 = -3184863312547522955LL;
int zero = 0;
unsigned char var_10 = (unsigned char)131;
signed char var_11 = (signed char)-87;
signed char var_12 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
