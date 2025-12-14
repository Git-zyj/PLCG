#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
short var_1 = (short)-16869;
long long int var_3 = -5644703973894469574LL;
unsigned short var_4 = (unsigned short)44121;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)213;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-15598;
short var_11 = (short)24230;
long long int var_12 = -4539289610371016653LL;
unsigned char var_13 = (unsigned char)187;
unsigned char var_14 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
