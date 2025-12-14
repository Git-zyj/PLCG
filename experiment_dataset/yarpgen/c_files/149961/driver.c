#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2017363353;
unsigned char var_3 = (unsigned char)202;
unsigned short var_4 = (unsigned short)19407;
short var_7 = (short)29526;
unsigned short var_8 = (unsigned short)53650;
unsigned int var_10 = 2589839472U;
int zero = 0;
int var_12 = 696776929;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
