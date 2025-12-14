#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24442;
_Bool var_6 = (_Bool)1;
long long int var_7 = -57892651311184718LL;
int var_8 = 159385553;
unsigned char var_10 = (unsigned char)149;
int var_12 = 1579270406;
int zero = 0;
int var_13 = 182932164;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8736290824454945838LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
