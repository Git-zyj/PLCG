#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4151474670U;
unsigned char var_7 = (unsigned char)163;
unsigned short var_9 = (unsigned short)38522;
int var_13 = -30861072;
unsigned long long int var_14 = 18390313497630315608ULL;
int var_15 = -52261549;
int zero = 0;
unsigned short var_16 = (unsigned short)52230;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
