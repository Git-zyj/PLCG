#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
unsigned short var_2 = (unsigned short)6512;
signed char var_3 = (signed char)12;
unsigned short var_4 = (unsigned short)14219;
unsigned char var_7 = (unsigned char)177;
long long int var_8 = 3593807245280206813LL;
unsigned char var_15 = (unsigned char)219;
int zero = 0;
unsigned char var_20 = (unsigned char)97;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)131;
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
