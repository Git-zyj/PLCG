#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34830;
signed char var_8 = (signed char)39;
int var_9 = -1495470602;
unsigned char var_10 = (unsigned char)199;
unsigned char var_12 = (unsigned char)203;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)152;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)59819;
unsigned char var_17 = (unsigned char)228;
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
