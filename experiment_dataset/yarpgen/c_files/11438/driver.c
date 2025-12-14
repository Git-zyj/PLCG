#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
long long int var_1 = 3747240206449491600LL;
unsigned char var_6 = (unsigned char)127;
unsigned char var_7 = (unsigned char)161;
signed char var_8 = (signed char)29;
unsigned int var_10 = 3054513894U;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)48;
int zero = 0;
signed char var_20 = (signed char)-82;
short var_21 = (short)32648;
unsigned int var_22 = 3457980735U;
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
