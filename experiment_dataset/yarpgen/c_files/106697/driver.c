#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1450842666;
long long int var_3 = 5077658270630445170LL;
unsigned char var_5 = (unsigned char)188;
unsigned char var_10 = (unsigned char)238;
unsigned char var_11 = (unsigned char)143;
unsigned char var_12 = (unsigned char)206;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3738622059251659491LL;
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
