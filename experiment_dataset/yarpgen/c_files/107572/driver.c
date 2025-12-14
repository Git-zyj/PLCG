#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1872272625;
unsigned short var_3 = (unsigned short)2377;
short var_6 = (short)-19021;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)121;
long long int var_11 = -2625119994394708914LL;
unsigned int var_12 = 55756200U;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
unsigned short var_14 = (unsigned short)7098;
long long int var_15 = -702978480968932971LL;
unsigned int var_16 = 3569158098U;
signed char var_17 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
