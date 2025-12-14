#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)64088;
unsigned char var_7 = (unsigned char)255;
unsigned long long int var_10 = 4886314397726117775ULL;
unsigned short var_12 = (unsigned short)44694;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = 1525340619;
short var_21 = (short)19614;
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
