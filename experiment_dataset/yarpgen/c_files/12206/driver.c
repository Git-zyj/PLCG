#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)198;
unsigned int var_3 = 3783875089U;
unsigned int var_4 = 132984691U;
signed char var_5 = (signed char)-4;
unsigned short var_8 = (unsigned short)17615;
int var_10 = -1712848303;
int zero = 0;
short var_15 = (short)28764;
unsigned char var_16 = (unsigned char)94;
unsigned short var_17 = (unsigned short)52460;
unsigned char var_18 = (unsigned char)96;
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
