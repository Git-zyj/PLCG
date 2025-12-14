#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8026;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)6879;
unsigned char var_13 = (unsigned char)90;
int var_14 = -1884005648;
int zero = 0;
long long int var_16 = -4221811139851233377LL;
unsigned char var_17 = (unsigned char)69;
signed char var_18 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
