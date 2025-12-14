#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13995;
unsigned char var_2 = (unsigned char)171;
unsigned int var_3 = 1693904246U;
long long int var_6 = 4495368725980154164LL;
short var_7 = (short)-4137;
long long int var_8 = 6980811377062955759LL;
short var_13 = (short)32560;
int zero = 0;
long long int var_14 = -5372014245617844750LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3929904909U;
unsigned int var_17 = 1867274004U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
