#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16517;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3941880681U;
unsigned int var_9 = 2565754772U;
long long int var_10 = 3973292863640999359LL;
int zero = 0;
unsigned int var_11 = 2444522375U;
unsigned char var_12 = (unsigned char)201;
unsigned char var_13 = (unsigned char)220;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
