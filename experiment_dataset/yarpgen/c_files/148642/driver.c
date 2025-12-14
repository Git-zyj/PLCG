#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27257;
unsigned char var_7 = (unsigned char)195;
unsigned int var_8 = 2881618090U;
short var_11 = (short)-5024;
int var_15 = -296984666;
int var_17 = 829918127;
unsigned long long int var_18 = 8208440158708944674ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)11;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
