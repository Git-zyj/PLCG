#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)126;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)32;
unsigned char var_6 = (unsigned char)76;
signed char var_7 = (signed char)106;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)136;
signed char var_10 = (signed char)106;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
signed char var_13 = (signed char)-84;
unsigned char var_14 = (unsigned char)246;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
