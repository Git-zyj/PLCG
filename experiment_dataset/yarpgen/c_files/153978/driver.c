#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3363;
short var_7 = (short)8419;
unsigned int var_8 = 2099142579U;
signed char var_10 = (signed char)-56;
unsigned char var_13 = (unsigned char)240;
int zero = 0;
int var_20 = 356699088;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)13899;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
