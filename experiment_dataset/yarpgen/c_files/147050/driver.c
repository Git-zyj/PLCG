#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17985;
unsigned short var_2 = (unsigned short)44916;
signed char var_9 = (signed char)16;
unsigned short var_13 = (unsigned short)11017;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2969392253252623355LL;
unsigned char var_22 = (unsigned char)187;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
