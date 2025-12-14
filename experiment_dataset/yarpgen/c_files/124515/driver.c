#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
unsigned short var_6 = (unsigned short)27786;
int var_7 = -278165523;
signed char var_9 = (signed char)47;
signed char var_12 = (signed char)114;
unsigned int var_13 = 833952816U;
unsigned char var_15 = (unsigned char)244;
unsigned short var_16 = (unsigned short)58562;
int zero = 0;
unsigned short var_19 = (unsigned short)13797;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)5311;
int var_22 = -860834849;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
