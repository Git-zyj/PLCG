#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)28;
unsigned short var_5 = (unsigned short)181;
unsigned short var_7 = (unsigned short)64904;
_Bool var_12 = (_Bool)0;
int var_13 = -885618151;
int zero = 0;
signed char var_16 = (signed char)-8;
unsigned int var_17 = 2108742863U;
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
