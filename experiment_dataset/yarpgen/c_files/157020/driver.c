#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)72;
unsigned char var_2 = (unsigned char)111;
unsigned short var_4 = (unsigned short)39356;
int var_6 = 7310001;
short var_8 = (short)8981;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)114;
int zero = 0;
unsigned int var_15 = 2270574302U;
unsigned short var_16 = (unsigned short)44371;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
