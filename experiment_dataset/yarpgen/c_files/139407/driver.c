#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
unsigned int var_1 = 635116312U;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_8 = 259082454;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)91;
unsigned char var_12 = (unsigned char)91;
int zero = 0;
unsigned int var_13 = 2550022722U;
unsigned char var_14 = (unsigned char)164;
_Bool var_15 = (_Bool)1;
int var_16 = 1600933256;
unsigned short var_17 = (unsigned short)9908;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
