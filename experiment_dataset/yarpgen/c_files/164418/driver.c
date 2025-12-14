#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
short var_3 = (short)-6419;
_Bool var_7 = (_Bool)0;
short var_10 = (short)5174;
unsigned long long int var_12 = 17032784885001662802ULL;
unsigned short var_13 = (unsigned short)2945;
int var_15 = -285532177;
int zero = 0;
unsigned short var_16 = (unsigned short)1553;
unsigned char var_17 = (unsigned char)230;
void init() {
}

void checksum() {
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
