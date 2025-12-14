#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 254822092U;
int var_2 = -709026656;
unsigned char var_4 = (unsigned char)154;
_Bool var_5 = (_Bool)1;
int var_8 = -1057120778;
short var_13 = (short)-1699;
int zero = 0;
short var_16 = (short)-15436;
signed char var_17 = (signed char)5;
short var_18 = (short)-18380;
unsigned char var_19 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
