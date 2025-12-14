#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1374945648;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_19 = (short)27275;
int zero = 0;
unsigned char var_20 = (unsigned char)252;
unsigned char var_21 = (unsigned char)152;
unsigned short var_22 = (unsigned short)45589;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
