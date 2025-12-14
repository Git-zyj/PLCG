#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-60;
short var_5 = (short)-2113;
unsigned char var_8 = (unsigned char)107;
short var_11 = (short)9467;
unsigned char var_13 = (unsigned char)159;
unsigned char var_14 = (unsigned char)168;
int zero = 0;
int var_19 = -884984604;
_Bool var_20 = (_Bool)1;
int var_21 = -453822977;
short var_22 = (short)-4588;
short var_23 = (short)14695;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
