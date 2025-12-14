#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18177;
signed char var_8 = (signed char)-3;
short var_11 = (short)-8967;
int var_12 = -458351175;
int zero = 0;
unsigned short var_19 = (unsigned short)13032;
int var_20 = -352302509;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)80;
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
